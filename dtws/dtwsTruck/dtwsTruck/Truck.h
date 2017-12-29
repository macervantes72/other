#pragma once
#include "stdafx.h"
#include "CTheWorld.h"

class CTruck{

	//��ͼ��������±���ʹ����֮�󶼻�رգ���д����Ҳ����Ĭ�Ϲرյ������д��
public:
	//��ȻCTheWorld�Ĺ��캯����Ҫ���Σ�����������ֻ�����������ξ�����Ҫ����ռ��ˣ��������ﲻ�ܴ��Σ���Ҫͨ��CTruck�Ĺ��촫��ʵ��
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
	//���ڸ�dtws�Ĺ��캯����ʼ��
	CTruck(CString DictPath = "");
	void GoToChengDu();
	void MoveToTarget();
	void MapToNPC(CString NPC);

public:
	void ChangeSeconds();
	CString GetPicPath();
	
public:
	//�س�
	void GoBack();

	//�ߵ�NPC�������Ǳ���ͼ���������������
	void GoToNPC(CString PicPre,CString NPC,CString PicNext,BOOL IsCheck);
	//GoToNPC("����","�����ھ�����ͷ","��ȡ��������",0);
	

	//������
	void GetTask();
	//�߳���ͼ���ں����
	void GoOutMap(CString MapPre,CString MapNext);

	//�ߵ�����һ��������ɱ�֣��������߳������䣬������
	void Task(CString NPC,CString MapPre,CString MapNext);
	//Task("�����ھֽ��츣","����ʦ","�����ȷ�","Ұ��","������","�滨��");
	//Task("�����ھ�Ԭ��»","����","����","����ɮ","�滨��","����կ");
	//Task("�����ھ�������","�ڲ�ʿ��","�ڲ���̽","����","����կ","�ɶ�");

	//GoToNPC("�ɶ�","������","Ѻ�ڶԻ�",1);

	void CompleteTask();
public:
	int step;
	int check;
	int count;

public:
	//��ʼ����ע������
	void InitName(CString TruckName);
	//�سǣ��ߵ��ھ�
	void GoBackToTruck();
	//�ȴ��������������
	void GetTruck();
	//�ߵ�Ԥ���ص㣬���м�ʱ�����¼�ʱ�������⺯��
	void GoToThePicAndCheck(CString PicPath,int seconds,int check);
	//������
	void CheckLostTruck();
	//����Ƿ��ܽ�����
	void CheckAndDoTask();
	//��鲢�����ڳ�����
	void CheckAndCompleteTask();
	//���ͨ��
	void CheckPass();
	//��ⲻͨ��
	void CheckNotPass();
	//��������ʼ��
	void InitTaskName();
	//����֮���������ʼ����count + 1
	void Reset();

public:
	void ExecuteFun();
};

void DisposeFunBase(void *lp);
void DisposeFunChengDu(void *lp);
void DisposeFunTarget(void *lp);
void DisposeFunNPC(void *lp);