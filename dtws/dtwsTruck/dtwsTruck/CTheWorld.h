#pragma once
#include "stdafx.h"
#include "TheWorld.h"
#include "StopWatch.h"
#include <windef.h>
#include <vector>
using namespace std;

typedef struct PicSize{
	int width;
	int height;
	PicSize();
}PicSize;


class CTheWorld{
	
public:
	TheWorld tw;
	int WindowWidth;
	int WindowHeight;
	BOOL check;
	CString CheckPicPath;
	void (*CheckDisposeFun)(void *);
	void *CheckVoid;
	
private:
	CString GetName(CString PicPath);
	void NotFindPic(CString PicPath);
	void FindManyPic(CString PicPath,CString str);
	void FindManystr(CString str,CString tw_str);
	PicSize GetPicWidHeight(CString PicPath);
	void KeyPressOne(CString key,int KeyNumber);
public:
	vector<string> split(string str,char sep);
	string Tostring(CString str);
	
public:
	//输入字库路径，不输入则不使用字库
	CTheWorld(CString DictPath = "");
	//屏幕找图，找到则鼠标左键单击图片中心
	void FindAndClickPic(CString PicPath);
	//等待点击，阻塞线程
	void WaitClickPic(CString PicPath);
	//阻塞线程，判断是否已切换地图
	void JudgeIsToNextMap(CString PicPathPre,CString PicPathNext);
	//屏幕找色，找到则移动到第一个找到的位置点击，前面4个参数均以后面的PicPath相对
	void FindColorAndClick(int nMoveBeginPointX,int nMoveBeginPointY,int nMoveEndPointX,int nMoveEndPointY,CString color,CString PicPath,int dir);
	//在指定区域内搜图，搜到返回1，搜不到返回0
	BOOL FindPic(CString PicPath);
	//补充函数，增加限定条件，输入-1代表输入默认值，查找窗口为满屏，对比度为1.0，查找次数为1，查找次数为找不到时的最多查找次数
	BOOL FindPicWindowSim(CString PicPath,CRect rect,double sim,int FindNumber);
	//识别文字
	BOOL FindStr(CString str,CString color);
	//获取框，当前图片的左上角为相对
	CRect GetRect(CString PicPath,CRect rect);
	//搜索框内特定图片左上角并右键点击，第二个参数是在指定区域内搜图，如果不写则表示满屏搜图
	void FindPicAndRightClick(CString MapPic,CRect rect = CRect(0,0,0,0));
	//在单击图片之后按下键盘特定键
	void KeyPress(CString key,CString PicPath1,CString PicPath2);
	//开始检测意外图片的出现，出现则执行函数，不阻塞线程
	void BeginCheckPic(CString PicPath,void(*DisposeFun)(void *),void *VoidPara = NULL);
	//关闭检测
	void EndCheck();
};