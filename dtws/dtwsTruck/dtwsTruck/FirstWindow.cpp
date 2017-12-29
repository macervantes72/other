#include "stdafx.h"
#include "FirstWindow.h"
#include "Truck.h"
#include "theworldTruckDlg.h"

DWORD WINAPI FirstWindow(LPVOID lpParam){
	
	CTruck truck1(PathDict);
	/*
	while(1){
		//回城
		truck.GoBack();
		//走到镖局
		truck.GoToNPC("长安","长成镖局李镖头","领取运镖任务",0);
		//接任务
		truck.GetTask();
		//走出长安
		truck.GoOutMap("长安","马嵬驿");
		//走到任务一
		truck.Task("长成镖局金天福","炼丹师","溃兵先锋","野狼","马嵬驿","梨花谷");
		//走到任务二
		
		truck.Task("长成镖局袁天禄","棕熊","独狼","云游僧","梨花谷","白屏寨");
		//走到任务三
		truck.Task("长成镖局王天寿","乌部矛手","乌部密探","巨鳄","白屏寨","成都");
		//走到土财主
		truck.GoToNPC("成都","土财主","押镖对话",1);
		//交任务
		truck.CompleteTask();
	}*/
	CTruck truck2(PathDict);
	CTruck truck3(PathDict);
	truck1.InitName("陌上花开");
	truck2.InitName("倩倩");
	truck3.InitName("天丶风雪");
	CTheWorldTruckDlg *This = (CTheWorldTruckDlg *)lpParam;
	
	AfxMessageBox("两秒后采点，窗口1");
	Sleep(2000);
	CPoint point1;
	GetCursorPos(&point1);
	int Edit1x = point1.x;CString strEdit1x = "";strEdit1x.Format("%d",Edit1x);
	int Edit1y = point1.y;CString strEdit1y = "";strEdit1y.Format("%d",Edit1y);
	This->Edit1x.SetWindowTextA(strEdit1x);
	This->Edit1y.SetWindowTextA(strEdit1y);

	AfxMessageBox("两秒后采点，窗口2");
	Sleep(2000);
	CPoint point2;
	GetCursorPos(&point2);
	int Edit2x = point2.x;CString strEdit2x = "";strEdit2x.Format("%d",Edit2x);
	int Edit2y = point2.y;CString strEdit2y = "";strEdit2y.Format("%d",Edit2y);
	This->Edit2x.SetWindowTextA(strEdit2x);
	This->Edit2y.SetWindowTextA(strEdit2y);

	AfxMessageBox("两秒后采点，窗口3");
	Sleep(2000);
	CPoint point3;
	GetCursorPos(&point3);
	int Edit3x = point3.x;CString strEdit3x = "";strEdit3x.Format("%d",Edit3x);
	int Edit3y = point3.y;CString strEdit3y = "";strEdit3y.Format("%d",Edit3y);
	This->Edit3x.SetWindowTextA(strEdit3x);
	This->Edit3y.SetWindowTextA(strEdit3y);
	
	AfxMessageBox("采点完毕，请打开3个窗口停留在第三个，3秒后开始");
	Sleep(3000);
	CStopWatch TruckTime;
	while((truck1.count <= CountNumber) || (truck2.count <= CountNumber) || (truck3.count <= CountNumber)){
		
		//移动到第一窗口位置并点击
		truck1.theworld.tw.MoveTo(Edit1x,Edit1y);
		truck1.theworld.tw.LeftClick();
		
		Sleep(100);
		//执行执行函数
		truck1.ExecuteFun();
		
		//移动到第二窗口位置并点击
		truck2.theworld.tw.MoveTo(Edit2x,Edit2y);
		truck2.theworld.tw.LeftClick();
		Sleep(100);
		//执行执行函数
		truck2.ExecuteFun();

		//移动到第三窗口位置并点击
		truck3.theworld.tw.MoveTo(Edit3x,Edit3y);
		truck3.theworld.tw.LeftClick();
		Sleep(100);
		//执行执行函数
		truck3.ExecuteFun();
		
	}
	char buff[50] = {};
	sprintf_s(buff,"拉车完毕，总时间为%lf秒",TruckTime.GetWatchTime() / 1000.0);
	AfxMessageBox(buff);
	return 0;
}