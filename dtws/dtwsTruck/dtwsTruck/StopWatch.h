#pragma once
#include "stdafx.h"

#define Create_Thread(FunName,ParameterName,ThreadID) CreateThread(NULL,0,FunName,(LPVOID)ParameterName,0,&ThreadID)

class CStopWatch{
public:
	CStopWatch();
public:
	unsigned long time;
	unsigned long StopTime;
	unsigned long RunTime;
	unsigned long StopSecondsTime;
public:
	//����unsigned long�Ķ��Ǻ���Ϊ��λ��int���Ƿ��ӻ���Сʱ�����Σ�double����Ϊ��λ

	//����Ƿ�����
	bool StopOrRun;

	//ʱ��������һ��ģ������1Сʱ1��1���ʱ�䣬�������صľ���1�룬����������

	//�鿴�ߵ�Сʱ��
	int GetHour();
	//�鿴�ߵķ�����
	int GetMinute();
	//�鿴�ߵ�����
	double GetSeconds();

	//�鿴�ߵĺ��������ܺ�����
	unsigned long GetWatchTime();

	//��������ߵ���ʼʱ�䣬��������ܺ�����
	void SetWatchTime(unsigned long SetTime);

	//ֹͣ��ʱ��
	void Stop();

	//ֹͣ��һ����ʱ�䣬�������ʱ���Զ������ߣ������ܺ�����
	void Stop(unsigned long StopSecondsTime);

	//������ʱ��
	void Run();
};