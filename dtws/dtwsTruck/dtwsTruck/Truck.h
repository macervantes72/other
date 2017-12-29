#pragma once
#include "stdafx.h"
#include "CTheWorld.h"

class CTruck{

	//地图和任务记事本在使用完之后都会关闭，所写函数也是在默认关闭的情况下写的
public:
	//虽然CTheWorld的构造函数需要传参，但是在类中只是声明，传参就是需要分配空间了，所以这里不能传参，需要通过CTruck的构造传参实现
	CTheWorld theworld;
	CString NPC;
	CStopWatch StopWatch;

	CString TruckName;
	int seconds;
	int number;
	CString Target1;
	CString Target2;
	CString Target3;

private:
	CString GetPath(CString target);
	void GetTargetNPC();
	void KillTarget();
	void KillOne();

public:
	//用于给dtws的构造函数初始化
	CTruck(CString DictPath = "");
	void GoToChengDu();
	void MoveToTarget();
	void MapToNPC(CString NPC);

public:
	void ChangeSeconds();
	CString GetPicPath();
	
public:
	//回城
	void GoBack();

	//走到NPC，必须是本地图，带阻塞，带检测
	void GoToNPC(CString PicPre,CString NPC,CString PicNext,BOOL IsCheck);
	//GoToNPC("长安","长成镖局李镖头","领取运镖任务",0);
	

	//接任务
	void GetTask();
	//走出地图，内含检测
	void GoOutMap(CString MapPre,CString MapNext);

	//走到任务一，接任务，杀怪，交任务，走出马嵬驿，有阻塞
	void Task(CString NPC,CString MapPre,CString MapNext);
	//Task("长成镖局金天福","炼丹师","溃兵先锋","野狼","马嵬驿","梨花谷");
	//Task("长成镖局袁天禄","棕熊","独狼","云游僧","梨花谷","白屏寨");
	//Task("长成镖局王天寿","乌部士兵","乌部密探","巨鳄","白屏寨","成都");

	//GoToNPC("成都","土财主","押镖对话",1);

	void CompleteTask();
public:
	int step;
	int check;
	int count;

public:
	//初始化，注入人名
	void InitName(CString TruckName);
	//回城，走到镖局
	void GoBackToTruck();
	//等待点击接任务，骑马
	void GetTruck();
	//走到预订地点，类中计时器重新计时，进入检测函数
	void GoToThePicAndCheck(CString PicPath,int seconds,int check);
	//检查掉车
	void CheckLostTruck();
	//检测是否能接任务
	void CheckAndDoTask();
	//检查并交付镖车任务
	void CheckAndCompleteTask();
	//检测通过
	void CheckPass();
	//检测不通过
	void CheckNotPass();
	//怪物名初始化
	void InitTaskName();
	//结束之后各变量初始化和count + 1
	void Reset();

public:
	void ExecuteFun();
};

void DisposeFunBase(void *lp);
void DisposeFunChengDu(void *lp);
void DisposeFunTarget(void *lp);
void DisposeFunNPC(void *lp);