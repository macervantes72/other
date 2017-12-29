#include "stdafx.h"
#include "Truck.h"

CString CTruck::GetPath(CString target){
	return PathPre + target +  PathNext;
}

void CTruck::GetTargetNPC(){
	//等待点击自动寻路，为防止延迟
	theworld.WaitClickPic(GetPath("自动寻路"));
	//如果是已经调好的就不用再次设置了
	if(theworld.FindPic(GetPath("商店功能传送副本任务活动")) == 1) return;
	//查找是否有打钩商店，有则点击
	if(theworld.FindPic(GetPath("打钩商店")) == 1) {theworld.FindAndClickPic(GetPath("打钩商店"));theworld.tw.MoveTo(0,0);}
	if(theworld.FindPic(GetPath("打钩功能")) == 1) {theworld.FindAndClickPic(GetPath("打钩功能"));theworld.tw.MoveTo(0,0);}
	if(theworld.FindPic(GetPath("打钩传送")) == 1) {theworld.FindAndClickPic(GetPath("打钩传送"));theworld.tw.MoveTo(0,0);}
	if(theworld.FindPic(GetPath("打钩副本")) == 1) {theworld.FindAndClickPic(GetPath("打钩副本"));theworld.tw.MoveTo(0,0);}
	if(theworld.FindPic(GetPath("打钩任务")) == 1) {theworld.FindAndClickPic(GetPath("打钩任务"));theworld.tw.MoveTo(0,0);}
	if(theworld.FindPic(GetPath("无钩活动")) == 1) {theworld.FindAndClickPic(GetPath("无钩活动"));theworld.tw.MoveTo(0,0);}
	return;
}

void CTruck::MapToNPC(CString NPC){
	//打开地图
	theworld.KeyPress("M",GetPath("Alt6"),GetPath("Alt8"));
	//查找是否有自动寻路，没有则点击寻打开
	if(theworld.FindPic(GetPath("自动寻路")) == 0){
		Sleep(FindDelay);
		if(theworld.FindPic(GetPath("自动寻路")) == 0) theworld.FindAndClickPic(GetPath("寻"));
	}
	//将商店，功能，传送，副本，任务的钩去掉，将活动的钩打上
	GetTargetNPC();
	//找到NPC名字并单击
	theworld.FindAndClickPic(GetPath(NPC));
	//找到有钩活动并单击，做这两步是为了去掉NPC上的名字底色
	theworld.FindAndClickPic(GetPath("有钩活动"));
	//延迟一秒
	//Sleep(FindDelay);
	//单击
	theworld.tw.LeftClick();
	//将自动寻路窗口关掉
	theworld.FindAndClickPic(GetPath("×"));
	Sleep(Delay);
	//关闭地图
	theworld.KeyPress("M",GetPath("Alt6"),GetPath("Alt8"));
	return;
}

void CTruck::ChangeSeconds(){
	if(step == 3) seconds = 20;
	return;
}

CString CTruck::GetPicPath(){
	//if(step == 3) return "长安一段";
	return "";
}

void CTruck::MoveToTarget(){
	//打开任务记事本
	theworld.KeyPress("L",GetPath("Alt6"),GetPath("Alt8"));
	//找到怪物位置并点击
	theworld.FindColorAndClick(MoveBeginPointX,MoveBeginPointY,MoveEndPointX,MoveEndPointY,"F7F731-000000",GetPath("任务记事本"),3);
	//关闭任务记事本
	theworld.KeyPress("L",GetPath("Alt6"),GetPath("Alt8"));
	return;
}

void CTruck::KillOne(){
	//移动到任务记事本打开时所在界面的怪物
	MoveToTarget();
	//开始检测
	//theworld.BeginCheckPic(GetPath("交互马儿"),DisposeFunTarget,this);
	//走到怪物所需的时间
	Sleep(FindDelay);
	//关闭检测
	//theworld.EndCheck();
	//按Tab键寻找怪物，有则跳出循环，没有则延迟后继续按Tab寻找
	while(1){
		//按下Tab键判断是否与提供的3个怪物名一样
		theworld.KeyPress("Tab",GetPath("Alt6"),GetPath("Alt8"));
		Sleep(FindDelay);
		//查看是否有对应怪物，有则跳出
		if(theworld.FindStr(Target1,AllTargetColor) || theworld.FindStr(Target2,AllTargetColor) || theworld.FindStr(Target3,AllTargetColor) == 1) break;
		
	}
	//检测怪物有没有杀死，杀死则结束循环
	while(theworld.FindStr(Target1,AllTargetColor) || theworld.FindStr(Target2,AllTargetColor) || theworld.FindStr(Target3,AllTargetColor) == 1){
		//按下H键杀怪
		theworld.KeyPress("H",GetPath("Alt6"),GetPath("Alt8"));
		Sleep(FindDelay * 6);
	}
	return;
}

//这里的初始化不能写在花括号里
CTruck::CTruck(CString DictPath):theworld(DictPath){
	step = 1;
	//step = 1;
	check = 0;
	count = 1;
	seconds = 0;
	TruckName = ""; 
	number = 1;
	Target1 = "";
	Target2 = "";
	Target3 = "";
}

void CTruck::GoToChengDu(){
	//打开任务记事本
	theworld.KeyPress("L",GetPath("Alt6"),GetPath("Alt8"));
	//点击第一章-馒头的故事
	if(theworld.FindPic(GetPath("第一章-馒头的故事")) == 1) theworld.FindAndClickPic(GetPath("第一章-馒头的故事"));
	else theworld.FindAndClickPic(GetPath("第一章-馒头的故事黑"));
	//点击歪嘴的嘴
	theworld.FindAndClickPic(GetPath("歪嘴的嘴"));
	//点击376,449
	theworld.FindAndClickPic(GetPath("376,449"));
	//点击第一章-馒头的故事
	theworld.FindAndClickPic(GetPath("第一章-馒头的故事"));
	//关闭任务记事本
	theworld.KeyPress("L",GetPath("Alt6"),GetPath("Alt8"));
	return;
}

void CTruck::KillTarget(){
	
	while(1){
		//杀死一个怪物
		KillOne();
		//打开任务记事本
		theworld.KeyPress("L",GetPath("Alt6"),GetPath("Alt8"));
		//网络延迟
		Sleep(FindDelay);
		//检测是否能交付任务
		if(theworld.FindPic(GetPath("交付")) == 1){
			//点击交付任务
			theworld.FindAndClickPic(GetPath("交付"));
			//关闭任务记事本
			theworld.KeyPress("L",GetPath("Alt6"),GetPath("Alt8"));
			break;
		}
		//关闭任务记事本
		theworld.KeyPress("L",GetPath("Alt6"),GetPath("Alt8"));
	}
	return;
}

void CTruck::GoBack(){
	//设定必须在成都回城
	theworld.FindAndClickPic(GetPath("成都"));
	//Z键回城
	theworld.KeyPress("Z",GetPath("Alt6"),GetPath("Alt8"));
	//阻塞线程，到发现长安后释放
	theworld.JudgeIsToNextMap(GetPath("成都"),GetPath("长安"));
	return;
}

void CTruck::GoToNPC(CString PicPre,CString NPC,CString PicNext,BOOL IsCheck){
	this->NPC = NPC;
	//走到NPC
	MapToNPC(NPC);
	//如果IsCheck为1则检测
	if(IsCheck == 1) theworld.BeginCheckPic(GetPath("交互马儿"),DisposeFunNPC,this);
	//阻塞线程，判断是否已经到达长成镖局李镖头
	theworld.JudgeIsToNextMap(GetPath(PicPre),GetPath(PicNext));
	//如果IsCheck为1则关闭检测
	if(IsCheck == 1) theworld.EndCheck();
	return;
}

void CTruck::GetTask(){
	//查看是否有使用高级介绍信领取运镖任务，有则点击，无则点领取运镖任务
	if(theworld.FindPic(GetPath("使用高级介绍信领取运镖任务")) == 1) theworld.FindAndClickPic(GetPath("使用高级介绍信领取运镖任务"));
	else theworld.FindAndClickPic(GetPath("领取运镖任务"));
	//骑马
	theworld.KeyPress("X",GetPath("Alt6"),GetPath("Alt8"));
	Sleep(FindDelay * 2);
	return;
}

void CTruck::GoOutMap(CString MapPre,CString MapNext){
	//走到成都
	GoToChengDu();
	//开始检测
	//theworld.BeginCheckPic(GetPath("交互马儿"),DisposeFunChengDu,this);
	//判断是否出地图
	theworld.JudgeIsToNextMap(GetPath(MapPre),GetPath(MapNext));
	//关闭检测
	//theworld.EndCheck();
	//用下马和上马动作停止以任务继续走动
	theworld.KeyPress("X",GetPath("Alt6"),GetPath("Alt8"));
	Sleep(FindDelay / 2);
	//打坐用于阻断上马后继续自动行走
	theworld.KeyPress("B",GetPath("Alt6"),GetPath("Alt8"));
	//上马
	theworld.KeyPress("X",GetPath("Alt6"),GetPath("Alt8"));
	Sleep(FindDelay * 2);
	//由于不会掉车所以直接检测通过
	CheckPass();
	ExecuteFun();
	return;
}

void CTruck::Task(CString NPC,CString MapPre,CString MapNext){
	
	//走到NPC，阻塞，1表示检测
	GoToNPC(MapPre,NPC,"领取信物",1);
	//点击领取信物
	theworld.FindAndClickPic(GetPath("领取信物"));
	//点击确认
	theworld.FindAndClickPic(GetPath("确认"));
	
	//打怪
	KillTarget();
	
	//骑马
	theworld.KeyPress("X",GetPath("Alt6"),GetPath("Alt8"));
	//从任务记事本里去成都
	GoOutMap(MapPre,MapNext);
}

void CTruck::CompleteTask(){
	//点击押镖对话
	theworld.FindAndClickPic(GetPath("押镖对话"));
	//点击确定
	theworld.FindAndClickPic(GetPath("确定"));
	//打开任务记事本
	theworld.KeyPress("L",GetPath("Alt6"),GetPath("Alt8"));
	//防止网络延迟
	Sleep(FindDelay);
	//点击长成镖局镖车押送
	if(theworld.FindPic(GetPath("长成镖局镖车押送黑")) == 1) theworld.FindAndClickPic(GetPath("长成镖局镖车押送黑"));
	else theworld.FindAndClickPic(GetPath("长成镖局镖车押送"));
	theworld.FindAndClickPic(GetPath("交付"));
	//关闭任务记事本
	theworld.KeyPress("L",GetPath("Alt6"),GetPath("Alt8"));
	return;
}

void DisposeFunBase(void *lp){
	CTruck *This = (CTruck *)lp;
	This->theworld.tw.MoveTo(This->theworld.WindowWidth / 2,This->theworld.WindowHeight / 2);
	This->theworld.tw.LeftClick();
	Sleep(15000);
	return;
}

void DisposeFunChengDu(void *lp){
	DisposeFunBase(lp);
	CTruck *This = (CTruck *)lp;
	This->GoToChengDu();
	return;
}

void DisposeFunTarget(void *lp){
	DisposeFunBase(lp);
	CTruck *This = (CTruck *)lp;
	This->MoveToTarget();
	return;
}

void DisposeFunNPC(void *lp){
	DisposeFunBase(lp);
	CTruck *This = (CTruck *)lp;
	This->MapToNPC(This->NPC);
	return;
}

void CTruck::InitName(CString TruckName){
	this->TruckName = "（" + TruckName + "）";
	return;
}

void CTruck::GoBackToTruck(){
	GoBack();
	MapToNPC("长成镖局李镖头");
	step++;
	return;
}

void CTruck::GetTruck(){
	//阻塞线程，判断是否已经可以领取运镖任务
	theworld.JudgeIsToNextMap(GetPath("长安"),GetPath("领取运镖任务"));
	//接任务
	GetTask();
	CheckPass();
	ExecuteFun();
	return;
}

void CTruck::GoToThePicAndCheck(CString PicPath,int seconds,int check){
	//找车的等待时间，如果不找车seconds为0
	while(StopWatch.GetWatchTime() < (unsigned long)(this->seconds) * 1000);
	//找到镖车后刷屏
	if(theworld.FindStr("你离镖车太远了",RedTruck) == 1){
		int i = 5;
		while(i-- != 0){
			theworld.KeyPress("F6",GetPath("Alt6"),GetPath("Alt8"));
			Sleep(FindDelay / 2);
		}
	}
	//转到临时地图地点
	if(check == 1){
		//打开地图
		theworld.KeyPress("M",GetPath("Alt6"),GetPath("Alt8"));
		//寻找特定地图点并右键点击
		theworld.FindPicAndRightClick(GetPath(PicPath),theworld.GetRect(GetPath("世界地图"),CRect(-350,100,500,600)));
		//开始计时
		StopWatch.SetWatchTime(0);
		//关闭地图
		theworld.KeyPress("M",GetPath("Alt6"),GetPath("Alt8"));
		this->check = check;
		this->seconds = seconds;
		return;
	}
	//转到任务NPC
	if(check == 2){
		MapToNPC(PicPath);
		//开始计时
		StopWatch.SetWatchTime(0);
		this->check = check;
		this->seconds = seconds;
		return;
	}
	//转到土财主
	if(check == 3){
		MapToNPC(PicPath);
		//开始计时
		StopWatch.SetWatchTime(0);
		this->check = check;
		this->seconds = seconds;
		return;
	}
}

void CTruck::CheckLostTruck(){
	while(StopWatch.GetWatchTime() < (unsigned long)seconds * 1000);
	//如果在右上角的窗口里能看到镖车图片，或者在全屏搜索能看到（TruckName）则表示镖车在附近，则检测通过
	if(theworld.FindStr("你离镖车太远了",RedTruck) == 0){
		CheckPass();
		ExecuteFun();
		return;
	}
	else{
		//打开地图
		theworld.KeyPress("M",GetPath("Alt6"),GetPath("Alt8"));
		Sleep(100);
		CString TheTruck = "";
		if(theworld.FindPicWindowSim(GetPath("镖车绿"),theworld.GetRect(GetPath("世界地图"),CRect(-350,100,500,600)),1.0,2) == 1) TheTruck = "镖车绿";
		else if(theworld.FindPicWindowSim(GetPath("镖车蓝"),theworld.GetRect(GetPath("世界地图"),CRect(-350,100,500,600)),1.0,2) == 1) TheTruck = "镖车蓝";
		else if(theworld.FindPicWindowSim(GetPath("镖车紫"),theworld.GetRect(GetPath("世界地图"),CRect(-350,100,500,600)),1.0,2) == 1) TheTruck = "镖车紫";
		else{
			AfxMessageBox("当前地图内找不到镖车");
			exit(-1);
		}
		//寻找镖车并右键点击
		theworld.FindPicAndRightClick(GetPath(TheTruck),theworld.GetRect(GetPath("世界地图"),CRect(-350,100,500,600)));
		//关闭地图
		theworld.KeyPress("M",GetPath("Alt6"),GetPath("Alt8"));
		StopWatch.SetWatchTime(0);
		CheckNotPass();
	}
	return;
}

void CTruck::CheckAndDoTask(){
	while(StopWatch.GetWatchTime() < (unsigned long)seconds * 1000);
	//点击领取信物，这里不管镖车在不在附近都可以领取信物，但是后面的确定就没有了
	theworld.FindAndClickPic(GetPath("领取信物"));
	//由于点击领取信物之后要出现确认有延迟，所以需要等待两秒
	Sleep(FindDelay);
	if(theworld.FindPic(GetPath("确认")) == 0){
		//打开地图
		theworld.KeyPress("M",GetPath("Alt6"),GetPath("Alt8"));
		Sleep(100);
		CString TheTruck = "";
		if(theworld.FindPicWindowSim(GetPath("镖车绿"),theworld.GetRect(GetPath("世界地图"),CRect(-350,100,500,600)),1.0,2) == 1) TheTruck = "镖车绿";
		else if(theworld.FindPicWindowSim(GetPath("镖车蓝"),theworld.GetRect(GetPath("世界地图"),CRect(-350,100,500,600)),1.0,2) == 1) TheTruck = "镖车蓝";
		else if(theworld.FindPicWindowSim(GetPath("镖车紫"),theworld.GetRect(GetPath("世界地图"),CRect(-350,100,500,600)),1.0,2) == 1) TheTruck = "镖车紫";
		else{
			AfxMessageBox("当前地图内找不到镖车");
			exit(-1);
		}
		//寻找镖车并右键点击
		theworld.FindPicAndRightClick(GetPath(TheTruck),theworld.GetRect(GetPath("世界地图"),CRect(-350,100,500,600)));
		//关闭地图
		theworld.KeyPress("M",GetPath("Alt6"),GetPath("Alt8"));
		StopWatch.SetWatchTime(0);
		CheckNotPass();
		return;
	}
	
	//点击确认
	theworld.FindAndClickPic(GetPath("确认"));
	
	//怪物名初始化
	InitTaskName();
	//打怪
	KillTarget();
	number++;

	//需检测镖车是否在附近
	if(theworld.FindStr("你离镖车太远了",RedTruck) == 1){
		//打开地图
		theworld.KeyPress("M",GetPath("Alt6"),GetPath("Alt8"));
		Sleep(100);
		CString TheTruck = "";
		if(theworld.FindPicWindowSim(GetPath("镖车绿"),theworld.GetRect(GetPath("世界地图"),CRect(-350,100,500,600)),1.0,2) == 1) TheTruck = "镖车绿";
		else if(theworld.FindPicWindowSim(GetPath("镖车蓝"),theworld.GetRect(GetPath("世界地图"),CRect(-350,100,500,600)),1.0,2) == 1) TheTruck = "镖车蓝";
		else if(theworld.FindPicWindowSim(GetPath("镖车紫"),theworld.GetRect(GetPath("世界地图"),CRect(-350,100,500,600)),1.0,2) == 1) TheTruck = "镖车紫";
		else{
			AfxMessageBox("当前地图内找不到镖车");
			exit(-1);
		}
		//寻找镖车并右键点击
		theworld.FindPicAndRightClick(GetPath(TheTruck),theworld.GetRect(GetPath("世界地图"),CRect(-350,100,500,600)));
		//关闭地图
		theworld.KeyPress("M",GetPath("Alt6"),GetPath("Alt8"));
		Sleep(TaskFind);
	}
	//骑马
	theworld.KeyPress("X",GetPath("Alt6"),GetPath("Alt8"));
	Sleep(FindDelay * 2);
	//检测通过
	CheckPass();
	ExecuteFun();
	return;
}

void CTruck::CheckAndCompleteTask(){
	while(StopWatch.GetWatchTime() < (unsigned long)seconds * 1000);
	//点击押镖对话
	theworld.FindAndClickPic(GetPath("押镖对话"));
	//由于出现确定会有延迟，所以等待两秒
	Sleep(FindDelay);
	if(theworld.FindPic(GetPath("确定")) == 0){
		//打开地图
		theworld.KeyPress("M",GetPath("Alt6"),GetPath("Alt8"));
		Sleep(100);
		CString TheTruck = "";
		if(theworld.FindPicWindowSim(GetPath("镖车绿"),theworld.GetRect(GetPath("世界地图"),CRect(-350,100,500,600)),1.0,2) == 1) TheTruck = "镖车绿";
		else if(theworld.FindPicWindowSim(GetPath("镖车蓝"),theworld.GetRect(GetPath("世界地图"),CRect(-350,100,500,600)),1.0,2) == 1) TheTruck = "镖车蓝";
		else if(theworld.FindPicWindowSim(GetPath("镖车紫"),theworld.GetRect(GetPath("世界地图"),CRect(-350,100,500,600)),1.0,2) == 1) TheTruck = "镖车紫";
		else{
			AfxMessageBox("当前地图内找不到镖车");
			exit(-1);
		}
		//寻找镖车并右键点击
		theworld.FindPicAndRightClick(GetPath(TheTruck),theworld.GetRect(GetPath("世界地图"),CRect(-350,100,500,600)));
		//关闭地图
		theworld.KeyPress("M",GetPath("Alt6"),GetPath("Alt8"));
		StopWatch.SetWatchTime(0);
		CheckNotPass();
		return;
	}
	//点击确定
	theworld.FindAndClickPic(GetPath("确定"));
	//打开任务记事本
	theworld.KeyPress("L",GetPath("Alt6"),GetPath("Alt8"));
	//防止网络延迟
	Sleep(FindDelay);
	//点击长成镖局镖车押送
	if(theworld.FindPic(GetPath("长成镖局镖车押送黑")) == 1) theworld.FindAndClickPic(GetPath("长成镖局镖车押送黑"));
	else theworld.FindAndClickPic(GetPath("长成镖局镖车押送"));
	theworld.FindAndClickPic(GetPath("交付"));
	//关闭任务记事本
	theworld.KeyPress("L",GetPath("Alt6"),GetPath("Alt8"));
	check = 0;number = 1;step = 1;count++;seconds = 0;
	ExecuteFun();
	return;
}

void CTruck::CheckPass(){
	check = 0;
	seconds = 0;
	step++;
	return;
}

void CTruck::CheckNotPass(){
	check = 0;
	return;
}

void CTruck::InitTaskName(){
	//加上step是为了测试时跳步骤用
	if(number == 1 || step <= 10){
		Target1 = "野狼";
		Target2 = "溃兵先锋";
		Target3 = "溃兵精锐";
	}
	if(number == 2 || (step > 10 && step <= 18)){
		Target1 = "云游僧";
		Target2 = "独狼";
		Target3 = "棕熊";
	}
	if(number == 3 || step >18){
		Target1 = "乌部矛手";
		Target2 = "乌部士兵";
		Target3 = "巨鳄";
	}
	return;
}

void CTruck::Reset(){
	seconds = 0;
	number = 1;
	step = 1;
	check = 0;
	count++;
	return;
}

void CTruck::ExecuteFun(){
	if(count > CountNumber) return;
	if(check == 1){
		CheckLostTruck();
		return;
	}
	if(check == 2){
		CheckAndDoTask();
		return;
	}
	if(check == 3){
		CheckAndCompleteTask();
		return;
	}
	if(step == 1) GoBackToTruck();
	else if(step ==  2) GetTruck();
	else if(step ==  3) GoToThePicAndCheck("长安一段",37,1);
	else if(step ==  4) GoToThePicAndCheck("长安末尾",36,1);
	else if(step ==  5) GoOutMap("长安","马嵬驿");

	else if(step ==  6) GoToThePicAndCheck("马嵬驿一段",26,1);
	else if(step ==  7) GoToThePicAndCheck("马嵬驿二段",28,1);
	else if(step ==  8) GoToThePicAndCheck("长成镖局金天福",32,2);
	else if(step ==  9) GoToThePicAndCheck("马嵬驿三段",32,1);
	else if(step == 10) GoToThePicAndCheck("马嵬驿末尾",19,1);
	else if(step == 11) GoOutMap("马嵬驿","梨花谷");

	else if(step == 12) GoToThePicAndCheck("梨花谷一段",31,1);
	else if(step == 13) GoToThePicAndCheck("梨花谷二段",34,1);
	else if(step == 14) GoToThePicAndCheck("长成镖局袁天禄",24,2);
	else if(step == 15) GoToThePicAndCheck("梨花谷三段",30,1);
	else if(step == 16) GoToThePicAndCheck("梨花谷末尾",18,1);
	else if(step == 17) GoOutMap("梨花谷","白屏寨");

	else if(step == 18) GoToThePicAndCheck("白屏寨一段",22,1);
	else if(step == 19) GoToThePicAndCheck("白屏寨二段",28,1);
	else if(step == 20) GoToThePicAndCheck("白屏寨三段",29,1);
	else if(step == 21) GoToThePicAndCheck("长成镖局王天寿",36,2);
	else if(step == 22) GoToThePicAndCheck("白屏寨四段",33,1);
	else if(step == 23) GoToThePicAndCheck("白屏寨末尾",35,1);
	else if(step == 24) GoOutMap("白屏寨","青城山");

	else if(step == 25) GoToThePicAndCheck("青城山一段",31,1);
	else if(step == 26) GoToThePicAndCheck("青城山二段",27,1);
	else if(step == 27) GoToThePicAndCheck("青城山三段",25,1);
	else if(step == 28) GoToThePicAndCheck("青城山四段",33,1);
	else if(step == 29) GoToThePicAndCheck("青城山末尾",27,1);
	else if(step == 30) GoOutMap("青城山","成都");

	else if(step == 31) GoToThePicAndCheck("成都一段",26,1);
	else if(step == 32) GoToThePicAndCheck("成都二段",40,1);
	else if(step == 33) GoToThePicAndCheck("土财主",35,3);
	return;
}

