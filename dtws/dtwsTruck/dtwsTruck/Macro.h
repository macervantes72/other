#pragma once
#include "stdafx.h"

#define DM_DLL_PATH "D:\\dm\\TWDLL.dll"
#define PicDeviation "202020"
#define TaskNote "D:\\dm\\src\\任务记事本.bmp"
#define ChengDu "D:\\dm\\src\\成都.bmp"
#define PathPre "D:\\dm\\src\\"
#define PathNext ".bmp"
#define PathDict "D:\\dm\\TheWorldSoft.txt"

#define PicSim    1.0    //图片比对相似度
#define PicDir    0      //从左向右从上向下查找图片
#define Delay     50     //在做下单击，按键等操作时，为防止网络延迟设置等待时间
#define FindDelay 1000   //等待点击时查找图片间隔时间
#define TargetDelay 5000
#define TaskFind 10000 //做任务时掉车，找车时阻塞线程等待时间
#define FindTime  300000 //等待点击的最多等待时间，跨越地图最多等待时间
#define YellowColor  "F7F731-000000" //任务记事本中黄色
#define YellowTarget "C4DC3C-000000|EBEBEB-000000" //怪物血条上黄色或白色
#define RedTarget    "CE0303-000000|EBEBEB-000000" //怪物血条上红色或白色
#define AllTargetColor "C4DC3C-000000|CE0303-000000|EBEBEB-000000"
#define RedTruck     "F83131-000000"
#define NameColor    "32EDED-000000"
#define MoveDir   3      //从右向左从下向上寻找
#define MoveBeginPointX  37
#define MoveBeginPointY 154
#define MoveEndPointX 351
#define MoveEndPointY 388 //以上四条都是相对于任务记事本
#define CountNumber 1