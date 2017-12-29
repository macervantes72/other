#include "stdafx.h"
#include "CTheWorld.h"

CTheWorld::CTheWorld(CString DictPath){
	//ע��
	CString WinExecPath = "";
	WinExecPath = WinExecPath + "regsvr32 " + DM_DLL_PATH + " -s";
	WinExec(WinExecPath,SW_SHOW);//��Į��λ��·��������Ķ���д�Ķ��ɣ���дҲ�У�д��Ҳ������
	CoInitialize(NULL);
	CLSID clsid;
	HRESULT hr=CLSIDFromProgID(OLESTR("tw.twsoft"),&clsid);//���á�������.��������ȡCLSID��&���ǰ�ָ���������Ҳ���Ǵ�ַ��
	tw.CreateDispatch(clsid);

	//��ȡ�ֱ���
	WindowWidth = tw.GetScreenWidth();
	WindowHeight = tw.GetScreenHeight();
	check = 0;
	CheckPicPath = "";
	CheckDisposeFun = NULL;
	CheckVoid = NULL;

	//�����ֿ��ʹ���ֿ�
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
	strName = "û���ҵ�" + GetName(PicPath) + "ͼƬ";
	AfxMessageBox(strName);
	exit(-1);
}

void CTheWorld::FindManyPic(CString PicPath,CString str){
	CString strName = "";
	strName = "�ҵ�����" + GetName(PicPath) + "ͼƬ������Ϊ" + str;
	AfxMessageBox(strName);
	exit(-1);
}

void CTheWorld::FindManystr(CString str,CString tw_str){
	CString strName = "";
	strName = "�ҵ����" + str + "ͼƬ������Ϊ" + tw_str;
	AfxMessageBox(strName);
	exit(-1);
}

vector<string> CTheWorld::split(string str,char sep){
	vector<string> result;
	unsigned int i = 0;
	int j = 1;
	//�����ַ���
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
	FILE *fp = fopen(PicPath,"rb");//�����ƶ���ʽ��ָ����ͼ���ļ�
	if(fp == 0){
		CString Error = "";
		Error = Error + "�Ҳ���" + PicPath;
		AfxMessageBox(Error);
		exit(-1);
	}
     //����λͼ�ļ�ͷ�ṹBITMAPFILEHEADER
	fseek(fp, sizeof(BITMAPFILEHEADER),0);
	//����λͼ��Ϣͷ�ṹ��������ȡλͼ��Ϣͷ���ڴ棬����ڱ���head��
	BITMAPINFOHEADER head;  
	fread(&head, sizeof(BITMAPINFOHEADER), 1,fp); //��ȡͼ����ߡ�ÿ������ռλ������Ϣ
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
		CString Error = "����" + key + "ʧ��";
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
	//δ�ҵ�
	if(str == ""){
		i++;
		Sleep(FindDelay);
		if(i > 2) NotFindPic(PicPath);
		else goto rem;
	}
	//�ҵ�����
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
	//δ�ҵ�
	if(str == ""){
		Sleep(FindDelay);
		if(StopWatch.GetWatchTime() > FindTime){
			char time[10] = {};
			sprintf(time,"%d",FindTime / 1000);
			CString Error = "����ͼƬ" + GetName(PicPath) + "ʱ��ʱ���ܹ��ĵȴ�ʱ��Ϊ" + time + "��";
			AfxMessageBox(Error);
			exit(-1);
		}
		goto rem;
	}
	//�ҵ�����
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

	//δ�ҵ�
	if(pre == "") NotFindPic(PicPathPre);
	//�ҵ�����
	else if(pre.Find("|") != -1) FindManyPic(PicPathPre,pre);

	rem:
	CString str = tw.FindPicEx(0,0,WindowWidth,WindowHeight,PicPathNext,PicDeviation,PicSim,PicDir);
	//δ�ҵ�
	if(str == ""){
		Sleep(FindDelay);
		if(StopWatch.GetWatchTime() > FindTime){
			char time[10] = {};
			sprintf(time,"%d",FindTime / 1000);
			CString Error = "����ͼƬ" + GetName(PicPathNext) + "ʱ��ʱ���ܹ��ĵȴ�ʱ��Ϊ" + time + "��";
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
	//δ�ҵ�
	if(str == ""){
		i++;
		Sleep(FindDelay);
		if(i > 2) NotFindPic(PicPath);
		else goto rem;
	}
	//�ҵ�����
	else if(str.Find("|") != -1) FindManyPic(PicPath,str);

	vector<string> vec = split(Tostring(str),',');
	
	CString strColor = tw.FindColorE(atoi(vec.at(1).c_str()) + nMoveBeginPointX,atoi(vec.at(2).c_str()) + nMoveBeginPointY,atoi(vec.at(1).c_str()) + nMoveEndPointX,atoi(vec.at(2).c_str()) + nMoveEndPointY,color,1.0,dir);
	vector<string> vecColor = split(Tostring(strColor),'|');
	if(atoi(vecColor.at(0).c_str()) == -1 && atoi(vecColor.at(1).c_str()) == -1){
		CString Error = "δ�ҵ�" + color + "��ɫ";
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

	//δ�ҵ�
	if(str == ""){
		i++;
		if(i == 3) NotFindPic(PicPath);
		Sleep(FindDelay);
		goto rem;
	}

	//�ҵ�����
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

	//δ�ҵ�
	if(str == ""){
		Sleep(FindDelay);
		i++;
		if(i == 3) NotFindPic(MapPic);
		goto rem;
	}
	//�ҵ�����
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
	if(key == "L") KeyPressOne(key,76);  //������±�
	else if(key ==   "B") KeyPressOne(key, 66); //����
	else if(key ==   "M") KeyPressOne(key, 77); //��ͼ
	else if(key ==   "Z") KeyPressOne(key, 90); //�س�
	else if(key ==   "X") KeyPressOne(key, 88); //����
	else if(key ==   "H") KeyPressOne(key, 72); //����
	else if(key ==  "F6") KeyPressOne(key,117); //ˢ��
	else if(key == "Tab") KeyPressOne(key,  9); //����
	else AfxMessageBox("����δ�趨");
	tw.MoveTo(0,0);
	return;
}

DWORD WINAPI CheckPicThread(LPVOID lpParam){
	CTheWorld *This = (CTheWorld *)lpParam;

	while(This->check){
		while(This->FindPic(This->CheckPicPath) == 0){
			if(This->check == 0){
				//�ͷ�ͼƬ�������ͼƬֻ��ʹ��һ��
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