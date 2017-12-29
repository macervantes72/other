#include "stdafx.h"
#include "CTheWorld.h"

CTheWorld::CTheWorld(CString DictPath){
	//注册
	CString WinExecPath = "";
	WinExecPath = WinExecPath + "regsvr32 " + DM_DLL_PATH + " -s";
	WinExec(WinExecPath,SW_SHOW);//大漠的位置路径你放在哪儿就写哪儿吧，不写也行，写了也不多余
	CoInitialize(NULL);
	CLSID clsid;
	HRESULT hr=CLSIDFromProgID(OLESTR("tw.twsoft"),&clsid);//利用“根名称.类名”获取CLSID，&就是把指针给函数，也就是传址。
	tw.CreateDispatch(clsid);

	//获取分辨率
	WindowWidth = tw.GetScreenWidth();
	WindowHeight = tw.GetScreenHeight();
	check = 0;
	CheckPicPath = "";
	CheckDisposeFun = NULL;
	CheckVoid = NULL;

	//设置字库和使用字库
	if(DictPath != ""){
		tw.SetDict(0,DictPath);
		tw.UseDict(0);
	}
}

PicSize::PicSize(){
	width = 0;
	height = 0;
}

CString CTheWorld::GetName(CString PicPath){
	int NameLeft = PicPath.ReverseFind('\\');
	int Nameright = PicPath.ReverseFind('.');
	char PathName[80] = {};
	strcpy(PathName,PicPath.GetBuffer());
	PicPath.ReleaseBuffer();
	char Name[80] = {};
	memcpy(Name,PathName + NameLeft + 1,Nameright - NameLeft - 1);
	return Name;
}

void CTheWorld::NotFindPic(CString PicPath){
	CString strName = "";
	strName = "没有找到" + GetName(PicPath) + "图片";
	AfxMessageBox(strName);
	exit(-1);
}

void CTheWorld::FindManyPic(CString PicPath,CString str){
	CString strName = "";
	strName = "找到多张" + GetName(PicPath) + "图片，坐标为" + str;
	AfxMessageBox(strName);
	exit(-1);
}

void CTheWorld::FindManystr(CString str,CString tw_str){
	CString strName = "";
	strName = "找到多个" + str + "图片，坐标为" + tw_str;
	AfxMessageBox(strName);
	exit(-1);
}

vector<string> CTheWorld::split(string str,char sep){
	vector<string> result;
	unsigned int i = 0;
	int j = 1;
	//遍历字符串
	while(i < str.length()){
		if(str[j] == sep || str[j] == '\0'){
			result.push_back(str.substr(i,j - i));
			j++;
			i = j;
		}
		else j++;
	}
	return result;
}

PicSize CTheWorld::GetPicWidHeight(CString PicPath){
	FILE *fp = fopen(PicPath,"rb");//二进制读方式打开指定的图像文件
	if(fp == 0){
		CString Error = "";
		Error = Error + "找不到" + PicPath;
		AfxMessageBox(Error);
		exit(-1);
	}
     //跳过位图文件头结构BITMAPFILEHEADER
	fseek(fp, sizeof(BITMAPFILEHEADER),0);
	//定义位图信息头结构变量，读取位图信息头进内存，存放在变量head中
	BITMAPINFOHEADER head;  
	fread(&head, sizeof(BITMAPINFOHEADER), 1,fp); //获取图像宽、高、每像素所占位数等信息
	PicSize result;
	result.width = head.biWidth;
	result.height = head.biHeight;
	fclose(fp);
	return result;
}

string CTheWorld::Tostring(CString str){
	string result = str.GetBuffer();
	str.ReleaseBuffer();
	return result;
}

void CTheWorld::KeyPressOne(CString key,int KeyNumber){
	BOOL x = tw.KeyPress(KeyNumber);
	if(x == 0){
		CString Error = "按键" + key + "失败";
		AfxMessageBox(Error);
		exit(-1);
	}
	Sleep(Delay);
}

void CTheWorld::FindAndClickPic(CString PicPath){
	PicSize size = GetPicWidHeight(PicPath);
	int i = 0;
	rem:
	CString str = tw.FindPicEx(0,0,WindowWidth,WindowHeight,PicPath,PicDeviation,PicSim,PicDir);
	//未找到
	if(str == ""){
		i++;
		Sleep(FindDelay);
		if(i > 2) NotFindPic(PicPath);
		else goto rem;
	}
	//找到多张
	else if(str.Find("|") != -1) FindManyPic(PicPath,str);

	
	vector<string> vec = split(Tostring(str),',');
	
	tw.MoveTo(atoi(vec.at(1).c_str()) + size.width / 2,atoi(vec.at(2).c_str()) + size.height / 2);
	tw.LeftClick();
	Sleep(Delay);
	return;
}

void CTheWorld::WaitClickPic(CString PicPath){
	PicSize size = GetPicWidHeight(PicPath);
	CStopWatch StopWatch;
	rem:
	CString str = tw.FindPicEx(0,0,WindowWidth,WindowHeight,PicPath,PicDeviation,PicSim,PicDir);
	//未找到
	if(str == ""){
		Sleep(FindDelay);
		if(StopWatch.GetWatchTime() > FindTime){
			char time[10] = {};
			sprintf(time,"%d",FindTime / 1000);
			CString Error = "查找图片" + GetName(PicPath) + "时超时，总共的等待时间为" + time + "秒";
			AfxMessageBox(Error);
			exit(-1);
		}
		goto rem;
	}
	//找到多张
	else if(str.Find("|") != -1) FindManyPic(PicPath,str);

	vector<string> vec = split(Tostring(str),',');
	
	tw.MoveTo(atoi(vec.at(1).c_str()) + size.width / 2,atoi(vec.at(2).c_str()) + size.height / 2);
	tw.LeftClick();
	Sleep(Delay);
	return;
}

void CTheWorld::JudgeIsToNextMap(CString PicPathPre,CString PicPathNext){
	CStopWatch StopWatch;

	CString pre = tw.FindPicEx(0,0,WindowWidth,WindowHeight,PicPathPre,PicDeviation,PicSim,PicDir);

	//未找到
	if(pre == "") NotFindPic(PicPathPre);
	//找到多张
	else if(pre.Find("|") != -1) FindManyPic(PicPathPre,pre);

	rem:
	CString str = tw.FindPicEx(0,0,WindowWidth,WindowHeight,PicPathNext,PicDeviation,PicSim,PicDir);
	//未找到
	if(str == ""){
		Sleep(FindDelay);
		if(StopWatch.GetWatchTime() > FindTime){
			char time[10] = {};
			sprintf(time,"%d",FindTime / 1000);
			CString Error = "查找图片" + GetName(PicPathNext) + "时超时，总共的等待时间为" + time + "秒";
			AfxMessageBox(Error);
			exit(-1);
		}
		goto rem;
	}
	else if(str.Find("|") != -1) FindManyPic(PicPathNext,str);
	Sleep(FindDelay);
	return;
}

void CTheWorld::FindColorAndClick(int nMoveBeginPointX,int nMoveBeginPointY,int nMoveEndPointX,int nMoveEndPointY,CString color,CString PicPath,int dir){

	int i = 0;
	rem:
	CString str = tw.FindPicEx(0,0,WindowWidth,WindowHeight,PicPath,PicDeviation,PicSim,PicDir);
	//未找到
	if(str == ""){
		i++;
		Sleep(FindDelay);
		if(i > 2) NotFindPic(PicPath);
		else goto rem;
	}
	//找到多张
	else if(str.Find("|") != -1) FindManyPic(PicPath,str);

	vector<string> vec = split(Tostring(str),',');
	
	CString strColor = tw.FindColorE(atoi(vec.at(1).c_str()) + nMoveBeginPointX,atoi(vec.at(2).c_str()) + nMoveBeginPointY,atoi(vec.at(1).c_str()) + nMoveEndPointX,atoi(vec.at(2).c_str()) + nMoveEndPointY,color,1.0,dir);
	vector<string> vecColor = split(Tostring(strColor),'|');
	if(atoi(vecColor.at(0).c_str()) == -1 && atoi(vecColor.at(1).c_str()) == -1){
		CString Error = "未找到" + color + "颜色";
		AfxMessageBox(Error);
		exit(-1);
	}
	tw.MoveTo(atoi(vecColor.at(0).c_str()),atoi(vecColor.at(1).c_str()));
	tw.LeftClick();
	Sleep(Delay);
	return;
}

BOOL CTheWorld::FindPic(CString PicPath){
	CString str = tw.FindPicEx(0,0,WindowWidth,WindowHeight,PicPath,PicDeviation,PicSim,PicDir);
	if(str.Find("|") != -1) FindManyPic(PicPath,str);
	if(str == "") return 0;
	else return 1;
}

BOOL CTheWorld::FindPicWindowSim(CString PicPath,CRect rect,double sim,int FindNumber){
	if(rect.left   == -1) rect.left   = 0;
	if(rect.top    == -1) rect.top    = 0;
	if(rect.right  == -1) rect.right  = WindowWidth;
	if(rect.bottom == -1) rect.bottom = WindowHeight;
	if(sim == -1) sim = 1.0;
	if(FindNumber == -1) FindNumber = 1;
	int i = 0;
	rem:
	CString str = tw.FindPicEx(rect.left,rect.top,rect.right,rect.bottom,PicPath,PicDeviation,sim,PicDir);
	if(str.Find("|") != -1) FindManyPic(PicPath,str);
	if(str == ""){
		Sleep(FindDelay);
		i++;
		if(i == FindNumber) return 0;
		goto rem;
	}
	else return 1;
}

BOOL CTheWorld::FindStr(CString str,CString color){
	CString tw_str = tw.FindStrEx(0,0,WindowWidth,WindowHeight,str,color,PicSim);
	//if(tw_str.Find("|") != -1) FindManystr(str,tw_str);
	if(tw_str == "") return 0;
	else return 1;
}

CRect CTheWorld::GetRect(CString PicPath,CRect rect){
	int i = 0;
	rem:
	CString str = tw.FindPicEx(0,0,WindowWidth,WindowHeight,PicPath,PicDeviation,PicSim,PicDir);

	//未找到
	if(str == ""){
		i++;
		if(i == 3) NotFindPic(PicPath);
		Sleep(FindDelay);
		goto rem;
	}

	//找到多张
	else if(str.Find("|") != -1) FindManyPic(PicPath,str);

	vector<string> vec = split(Tostring(str),',');
	CRect Rect;
	Rect.left = atoi(vec.at(1).c_str()) + rect.left;
	Rect.top = atoi(vec.at(2).c_str()) + rect.top;
	Rect.right = atoi(vec.at(1).c_str()) + rect.right;
	Rect.bottom = atoi(vec.at(2).c_str()) + rect.bottom;

	return Rect;
}

void CTheWorld::FindPicAndRightClick(CString MapPic,CRect rect){
	if(rect == CRect(0,0,0,0)) rect = CRect(0,0,WindowWidth,WindowHeight);

	int i = 0;
	rem:
	CString str = tw.FindPicEx(rect.left,rect.top,rect.right,rect.bottom,MapPic,PicDeviation,PicSim,PicDir);

	//未找到
	if(str == ""){
		Sleep(FindDelay);
		i++;
		if(i == 3) NotFindPic(MapPic);
		goto rem;
	}
	//找到多张
	else if(str.Find("|") != -1) FindManyPic(MapPic,str);

	vector<string> vec = split(Tostring(str),',');
	
	tw.MoveTo(atoi(vec.at(1).c_str()),atoi(vec.at(2).c_str()));
	tw.RightClick();
	
	return;
}

void CTheWorld::KeyPress(CString key,CString PicPath1,CString PicPath2){
	if(FindPic(PicPath1) == 1) FindAndClickPic(PicPath1);
	else FindAndClickPic(PicPath2);
	Sleep(Delay);
	if(key == "L") KeyPressOne(key,76);  //任务记事本
	else if(key ==   "B") KeyPressOne(key, 66); //打坐
	else if(key ==   "M") KeyPressOne(key, 77); //地图
	else if(key ==   "Z") KeyPressOne(key, 90); //回城
	else if(key ==   "X") KeyPressOne(key, 88); //骑马
	else if(key ==   "H") KeyPressOne(key, 72); //攻击
	else if(key ==  "F6") KeyPressOne(key,117); //刷屏
	else if(key == "Tab") KeyPressOne(key,  9); //换人
	else AfxMessageBox("按键未设定");
	tw.MoveTo(0,0);
	return;
}

DWORD WINAPI CheckPicThread(LPVOID lpParam){
	CTheWorld *This = (CTheWorld *)lpParam;

	while(This->check){
		while(This->FindPic(This->CheckPicPath) == 0){
			if(This->check == 0){
				//释放图片，否则此图片只能使用一次
				This->tw.FreePic(This->CheckPicPath);
				return 0;
			}
			Sleep(FindDelay);
		}
		(This->CheckDisposeFun)(This->CheckVoid);
	}
	
	return 0;
}

void CTheWorld::BeginCheckPic(CString PicPath,void(*DisposeFun)(void *),void *VoidPara){
	DWORD ThreadID = 0;
	CheckPicPath = PicPath;
	CheckDisposeFun = DisposeFun;
	CheckVoid = VoidPara;
	check = 1;
	Create_Thread(CheckPicThread,this,ThreadID);
	return;
}

void CTheWorld::EndCheck(){
	check = 0;
	return;
}