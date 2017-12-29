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
	//�����ֿ�·������������ʹ���ֿ�
	CTheWorld(CString DictPath = "");
	//��Ļ��ͼ���ҵ�������������ͼƬ����
	void FindAndClickPic(CString PicPath);
	//�ȴ�����������߳�
	void WaitClickPic(CString PicPath);
	//�����̣߳��ж��Ƿ����л���ͼ
	void JudgeIsToNextMap(CString PicPathPre,CString PicPathNext);
	//��Ļ��ɫ���ҵ����ƶ�����һ���ҵ���λ�õ����ǰ��4���������Ժ����PicPath���
	void FindColorAndClick(int nMoveBeginPointX,int nMoveBeginPointY,int nMoveEndPointX,int nMoveEndPointY,CString color,CString PicPath,int dir);
	//��ָ����������ͼ���ѵ�����1���Ѳ�������0
	BOOL FindPic(CString PicPath);
	//���亯���������޶�����������-1��������Ĭ��ֵ�����Ҵ���Ϊ�������Աȶ�Ϊ1.0�����Ҵ���Ϊ1�����Ҵ���Ϊ�Ҳ���ʱ�������Ҵ���
	BOOL FindPicWindowSim(CString PicPath,CRect rect,double sim,int FindNumber);
	//ʶ������
	BOOL FindStr(CString str,CString color);
	//��ȡ�򣬵�ǰͼƬ�����Ͻ�Ϊ���
	CRect GetRect(CString PicPath,CRect rect);
	//���������ض�ͼƬ���Ͻǲ��Ҽ�������ڶ�����������ָ����������ͼ�������д���ʾ������ͼ
	void FindPicAndRightClick(CString MapPic,CRect rect = CRect(0,0,0,0));
	//�ڵ���ͼƬ֮���¼����ض���
	void KeyPress(CString key,CString PicPath1,CString PicPath2);
	//��ʼ�������ͼƬ�ĳ��֣�������ִ�к������������߳�
	void BeginCheckPic(CString PicPath,void(*DisposeFun)(void *),void *VoidPara = NULL);
	//�رռ��
	void EndCheck();
};