#include "stdafx.h"
#include "FirstWindow.h"
#include "Truck.h"
#include "theworldTruckDlg.h"

DWORD WINAPI FirstWindow(LPVOID lpParam){
	
	CTruck truck1(PathDict);
	/*
	while(1){
		//�س�
		truck.GoBack();
		//�ߵ��ھ�
		truck.GoToNPC("����","�����ھ�����ͷ","��ȡ��������",0);
		//������
		truck.GetTask();
		//�߳�����
		truck.GoOutMap("����","������");
		//�ߵ�����һ
		truck.Task("�����ھֽ��츣","����ʦ","�����ȷ�","Ұ��","������","�滨��");
		//�ߵ������
		
		truck.Task("�����ھ�Ԭ��»","����","����","����ɮ","�滨��","����կ");
		//�ߵ�������
		truck.Task("�����ھ�������","�ڲ�ì��","�ڲ���̽","����","����կ","�ɶ�");
		//�ߵ�������
		truck.GoToNPC("�ɶ�","������","Ѻ�ڶԻ�",1);
		//������
		truck.CompleteTask();
	}*/
	CTruck truck2(PathDict);
	CTruck truck3(PathDict);
	truck1.InitName("İ�ϻ���");
	truck2.InitName("ٻٻ");
	truck3.InitName("��ؼ��ѩ");
	CTheWorldTruckDlg *This = (CTheWorldTruckDlg *)lpParam;
	
	AfxMessageBox("�����ɵ㣬����1");
	Sleep(2000);
	CPoint point1;
	GetCursorPos(&point1);
	int Edit1x = point1.x;CString strEdit1x = "";strEdit1x.Format("%d",Edit1x);
	int Edit1y = point1.y;CString strEdit1y = "";strEdit1y.Format("%d",Edit1y);
	This->Edit1x.SetWindowTextA(strEdit1x);
	This->Edit1y.SetWindowTextA(strEdit1y);

	AfxMessageBox("�����ɵ㣬����2");
	Sleep(2000);
	CPoint point2;
	GetCursorPos(&point2);
	int Edit2x = point2.x;CString strEdit2x = "";strEdit2x.Format("%d",Edit2x);
	int Edit2y = point2.y;CString strEdit2y = "";strEdit2y.Format("%d",Edit2y);
	This->Edit2x.SetWindowTextA(strEdit2x);
	This->Edit2y.SetWindowTextA(strEdit2y);

	AfxMessageBox("�����ɵ㣬����3");
	Sleep(2000);
	CPoint point3;
	GetCursorPos(&point3);
	int Edit3x = point3.x;CString strEdit3x = "";strEdit3x.Format("%d",Edit3x);
	int Edit3y = point3.y;CString strEdit3y = "";strEdit3y.Format("%d",Edit3y);
	This->Edit3x.SetWindowTextA(strEdit3x);
	This->Edit3y.SetWindowTextA(strEdit3y);
	
	AfxMessageBox("�ɵ���ϣ����3������ͣ���ڵ�������3���ʼ");
	Sleep(3000);
	CStopWatch TruckTime;
	while((truck1.count <= CountNumber) || (truck2.count <= CountNumber) || (truck3.count <= CountNumber)){
		
		//�ƶ�����һ����λ�ò����
		truck1.theworld.tw.MoveTo(Edit1x,Edit1y);
		truck1.theworld.tw.LeftClick();
		
		Sleep(100);
		//ִ��ִ�к���
		truck1.ExecuteFun();
		
		//�ƶ����ڶ�����λ�ò����
		truck2.theworld.tw.MoveTo(Edit2x,Edit2y);
		truck2.theworld.tw.LeftClick();
		Sleep(100);
		//ִ��ִ�к���
		truck2.ExecuteFun();

		//�ƶ�����������λ�ò����
		truck3.theworld.tw.MoveTo(Edit3x,Edit3y);
		truck3.theworld.tw.LeftClick();
		Sleep(100);
		//ִ��ִ�к���
		truck3.ExecuteFun();
		
	}
	char buff[50] = {};
	sprintf_s(buff,"������ϣ���ʱ��Ϊ%lf��",TruckTime.GetWatchTime() / 1000.0);
	AfxMessageBox(buff);
	return 0;
}