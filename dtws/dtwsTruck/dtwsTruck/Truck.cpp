#include "stdafx.h"
#include "Truck.h"

CString CTruck::GetPath(CString target){
	return PathPre + target +  PathNext;
}

void CTruck::GetTargetNPC(){
	//�ȴ�����Զ�Ѱ·��Ϊ��ֹ�ӳ�
	theworld.WaitClickPic(GetPath("�Զ�Ѱ·"));
	//������Ѿ����õľͲ����ٴ�������
	if(theworld.FindPic(GetPath("�̵깦�ܴ��͸�������")) == 1) return;
	//�����Ƿ��д��̵꣬������
	if(theworld.FindPic(GetPath("���̵�")) == 1) {theworld.FindAndClickPic(GetPath("���̵�"));theworld.tw.MoveTo(0,0);}
	if(theworld.FindPic(GetPath("�򹳹���")) == 1) {theworld.FindAndClickPic(GetPath("�򹳹���"));theworld.tw.MoveTo(0,0);}
	if(theworld.FindPic(GetPath("�򹳴���")) == 1) {theworld.FindAndClickPic(GetPath("�򹳴���"));theworld.tw.MoveTo(0,0);}
	if(theworld.FindPic(GetPath("�򹳸���")) == 1) {theworld.FindAndClickPic(GetPath("�򹳸���"));theworld.tw.MoveTo(0,0);}
	if(theworld.FindPic(GetPath("������")) == 1) {theworld.FindAndClickPic(GetPath("������"));theworld.tw.MoveTo(0,0);}
	if(theworld.FindPic(GetPath("�޹��")) == 1) {theworld.FindAndClickPic(GetPath("�޹��"));theworld.tw.MoveTo(0,0);}
	return;
}

void CTruck::MapToNPC(CString NPC){
	//�򿪵�ͼ
	theworld.KeyPress("M",GetPath("Alt6"),GetPath("Alt8"));
	//�����Ƿ����Զ�Ѱ·��û������Ѱ��
	if(theworld.FindPic(GetPath("�Զ�Ѱ·")) == 0){
		Sleep(FindDelay);
		if(theworld.FindPic(GetPath("�Զ�Ѱ·")) == 0) theworld.FindAndClickPic(GetPath("Ѱ"));
	}
	//���̵꣬���ܣ����ͣ�����������Ĺ�ȥ��������Ĺ�����
	GetTargetNPC();
	//�ҵ�NPC���ֲ�����
	theworld.FindAndClickPic(GetPath(NPC));
	//�ҵ��й��������������������Ϊ��ȥ��NPC�ϵ����ֵ�ɫ
	theworld.FindAndClickPic(GetPath("�й��"));
	//�ӳ�һ��
	//Sleep(FindDelay);
	//����
	theworld.tw.LeftClick();
	//���Զ�Ѱ·���ڹص�
	theworld.FindAndClickPic(GetPath("��"));
	Sleep(Delay);
	//�رյ�ͼ
	theworld.KeyPress("M",GetPath("Alt6"),GetPath("Alt8"));
	return;
}

void CTruck::ChangeSeconds(){
	if(step == 3) seconds = 20;
	return;
}

CString CTruck::GetPicPath(){
	//if(step == 3) return "����һ��";
	return "";
}

void CTruck::MoveToTarget(){
	//��������±�
	theworld.KeyPress("L",GetPath("Alt6"),GetPath("Alt8"));
	//�ҵ�����λ�ò����
	theworld.FindColorAndClick(MoveBeginPointX,MoveBeginPointY,MoveEndPointX,MoveEndPointY,"F7F731-000000",GetPath("������±�"),3);
	//�ر�������±�
	theworld.KeyPress("L",GetPath("Alt6"),GetPath("Alt8"));
	return;
}

void CTruck::KillOne(){
	//�ƶ���������±���ʱ���ڽ���Ĺ���
	MoveToTarget();
	//��ʼ���
	//theworld.BeginCheckPic(GetPath("�������"),DisposeFunTarget,this);
	//�ߵ����������ʱ��
	Sleep(FindDelay);
	//�رռ��
	//theworld.EndCheck();
	//��Tab��Ѱ�ҹ����������ѭ����û�����ӳٺ������TabѰ��
	while(1){
		//����Tab���ж��Ƿ����ṩ��3��������һ��
		theworld.KeyPress("Tab",GetPath("Alt6"),GetPath("Alt8"));
		Sleep(FindDelay);
		//�鿴�Ƿ��ж�Ӧ�����������
		if(theworld.FindStr(Target1,AllTargetColor) || theworld.FindStr(Target2,AllTargetColor) || theworld.FindStr(Target3,AllTargetColor) == 1) break;
		
	}
	//��������û��ɱ����ɱ�������ѭ��
	while(theworld.FindStr(Target1,AllTargetColor) || theworld.FindStr(Target2,AllTargetColor) || theworld.FindStr(Target3,AllTargetColor) == 1){
		//����H��ɱ��
		theworld.KeyPress("H",GetPath("Alt6"),GetPath("Alt8"));
		Sleep(FindDelay * 6);
	}
	return;
}

//����ĳ�ʼ������д�ڻ�������
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
	//��������±�
	theworld.KeyPress("L",GetPath("Alt6"),GetPath("Alt8"));
	//�����һ��-��ͷ�Ĺ���
	if(theworld.FindPic(GetPath("��һ��-��ͷ�Ĺ���")) == 1) theworld.FindAndClickPic(GetPath("��һ��-��ͷ�Ĺ���"));
	else theworld.FindAndClickPic(GetPath("��һ��-��ͷ�Ĺ��º�"));
	//����������
	theworld.FindAndClickPic(GetPath("�������"));
	//���376,449
	theworld.FindAndClickPic(GetPath("376,449"));
	//�����һ��-��ͷ�Ĺ���
	theworld.FindAndClickPic(GetPath("��һ��-��ͷ�Ĺ���"));
	//�ر�������±�
	theworld.KeyPress("L",GetPath("Alt6"),GetPath("Alt8"));
	return;
}

void CTruck::KillTarget(){
	
	while(1){
		//ɱ��һ������
		KillOne();
		//��������±�
		theworld.KeyPress("L",GetPath("Alt6"),GetPath("Alt8"));
		//�����ӳ�
		Sleep(FindDelay);
		//����Ƿ��ܽ�������
		if(theworld.FindPic(GetPath("����")) == 1){
			//�����������
			theworld.FindAndClickPic(GetPath("����"));
			//�ر�������±�
			theworld.KeyPress("L",GetPath("Alt6"),GetPath("Alt8"));
			break;
		}
		//�ر�������±�
		theworld.KeyPress("L",GetPath("Alt6"),GetPath("Alt8"));
	}
	return;
}

void CTruck::GoBack(){
	//�趨�����ڳɶ��س�
	theworld.FindAndClickPic(GetPath("�ɶ�"));
	//Z���س�
	theworld.KeyPress("Z",GetPath("Alt6"),GetPath("Alt8"));
	//�����̣߳������ֳ������ͷ�
	theworld.JudgeIsToNextMap(GetPath("�ɶ�"),GetPath("����"));
	return;
}

void CTruck::GoToNPC(CString PicPre,CString NPC,CString PicNext,BOOL IsCheck){
	this->NPC = NPC;
	//�ߵ�NPC
	MapToNPC(NPC);
	//���IsCheckΪ1����
	if(IsCheck == 1) theworld.BeginCheckPic(GetPath("�������"),DisposeFunNPC,this);
	//�����̣߳��ж��Ƿ��Ѿ����ﳤ���ھ�����ͷ
	theworld.JudgeIsToNextMap(GetPath(PicPre),GetPath(PicNext));
	//���IsCheckΪ1��رռ��
	if(IsCheck == 1) theworld.EndCheck();
	return;
}

void CTruck::GetTask(){
	//�鿴�Ƿ���ʹ�ø߼���������ȡ�����������������������ȡ��������
	if(theworld.FindPic(GetPath("ʹ�ø߼���������ȡ��������")) == 1) theworld.FindAndClickPic(GetPath("ʹ�ø߼���������ȡ��������"));
	else theworld.FindAndClickPic(GetPath("��ȡ��������"));
	//����
	theworld.KeyPress("X",GetPath("Alt6"),GetPath("Alt8"));
	Sleep(FindDelay * 2);
	return;
}

void CTruck::GoOutMap(CString MapPre,CString MapNext){
	//�ߵ��ɶ�
	GoToChengDu();
	//��ʼ���
	//theworld.BeginCheckPic(GetPath("�������"),DisposeFunChengDu,this);
	//�ж��Ƿ����ͼ
	theworld.JudgeIsToNextMap(GetPath(MapPre),GetPath(MapNext));
	//�رռ��
	//theworld.EndCheck();
	//�������������ֹͣ����������߶�
	theworld.KeyPress("X",GetPath("Alt6"),GetPath("Alt8"));
	Sleep(FindDelay / 2);
	//��������������������Զ�����
	theworld.KeyPress("B",GetPath("Alt6"),GetPath("Alt8"));
	//����
	theworld.KeyPress("X",GetPath("Alt6"),GetPath("Alt8"));
	Sleep(FindDelay * 2);
	//���ڲ����������ֱ�Ӽ��ͨ��
	CheckPass();
	ExecuteFun();
	return;
}

void CTruck::Task(CString NPC,CString MapPre,CString MapNext){
	
	//�ߵ�NPC��������1��ʾ���
	GoToNPC(MapPre,NPC,"��ȡ����",1);
	//�����ȡ����
	theworld.FindAndClickPic(GetPath("��ȡ����"));
	//���ȷ��
	theworld.FindAndClickPic(GetPath("ȷ��"));
	
	//���
	KillTarget();
	
	//����
	theworld.KeyPress("X",GetPath("Alt6"),GetPath("Alt8"));
	//��������±���ȥ�ɶ�
	GoOutMap(MapPre,MapNext);
}

void CTruck::CompleteTask(){
	//���Ѻ�ڶԻ�
	theworld.FindAndClickPic(GetPath("Ѻ�ڶԻ�"));
	//���ȷ��
	theworld.FindAndClickPic(GetPath("ȷ��"));
	//��������±�
	theworld.KeyPress("L",GetPath("Alt6"),GetPath("Alt8"));
	//��ֹ�����ӳ�
	Sleep(FindDelay);
	//��������ھ��ڳ�Ѻ��
	if(theworld.FindPic(GetPath("�����ھ��ڳ�Ѻ�ͺ�")) == 1) theworld.FindAndClickPic(GetPath("�����ھ��ڳ�Ѻ�ͺ�"));
	else theworld.FindAndClickPic(GetPath("�����ھ��ڳ�Ѻ��"));
	theworld.FindAndClickPic(GetPath("����"));
	//�ر�������±�
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
	this->TruckName = "��" + TruckName + "��";
	return;
}

void CTruck::GoBackToTruck(){
	GoBack();
	MapToNPC("�����ھ�����ͷ");
	step++;
	return;
}

void CTruck::GetTruck(){
	//�����̣߳��ж��Ƿ��Ѿ�������ȡ��������
	theworld.JudgeIsToNextMap(GetPath("����"),GetPath("��ȡ��������"));
	//������
	GetTask();
	CheckPass();
	ExecuteFun();
	return;
}

void CTruck::GoToThePicAndCheck(CString PicPath,int seconds,int check){
	//�ҳ��ĵȴ�ʱ�䣬������ҳ�secondsΪ0
	while(StopWatch.GetWatchTime() < (unsigned long)(this->seconds) * 1000);
	//�ҵ��ڳ���ˢ��
	if(theworld.FindStr("�����ڳ�̫Զ��",RedTruck) == 1){
		int i = 5;
		while(i-- != 0){
			theworld.KeyPress("F6",GetPath("Alt6"),GetPath("Alt8"));
			Sleep(FindDelay / 2);
		}
	}
	//ת����ʱ��ͼ�ص�
	if(check == 1){
		//�򿪵�ͼ
		theworld.KeyPress("M",GetPath("Alt6"),GetPath("Alt8"));
		//Ѱ���ض���ͼ�㲢�Ҽ����
		theworld.FindPicAndRightClick(GetPath(PicPath),theworld.GetRect(GetPath("�����ͼ"),CRect(-350,100,500,600)));
		//��ʼ��ʱ
		StopWatch.SetWatchTime(0);
		//�رյ�ͼ
		theworld.KeyPress("M",GetPath("Alt6"),GetPath("Alt8"));
		this->check = check;
		this->seconds = seconds;
		return;
	}
	//ת������NPC
	if(check == 2){
		MapToNPC(PicPath);
		//��ʼ��ʱ
		StopWatch.SetWatchTime(0);
		this->check = check;
		this->seconds = seconds;
		return;
	}
	//ת��������
	if(check == 3){
		MapToNPC(PicPath);
		//��ʼ��ʱ
		StopWatch.SetWatchTime(0);
		this->check = check;
		this->seconds = seconds;
		return;
	}
}

void CTruck::CheckLostTruck(){
	while(StopWatch.GetWatchTime() < (unsigned long)seconds * 1000);
	//��������ϽǵĴ������ܿ����ڳ�ͼƬ��������ȫ�������ܿ�����TruckName�����ʾ�ڳ��ڸ���������ͨ��
	if(theworld.FindStr("�����ڳ�̫Զ��",RedTruck) == 0){
		CheckPass();
		ExecuteFun();
		return;
	}
	else{
		//�򿪵�ͼ
		theworld.KeyPress("M",GetPath("Alt6"),GetPath("Alt8"));
		Sleep(100);
		CString TheTruck = "";
		if(theworld.FindPicWindowSim(GetPath("�ڳ���"),theworld.GetRect(GetPath("�����ͼ"),CRect(-350,100,500,600)),1.0,2) == 1) TheTruck = "�ڳ���";
		else if(theworld.FindPicWindowSim(GetPath("�ڳ���"),theworld.GetRect(GetPath("�����ͼ"),CRect(-350,100,500,600)),1.0,2) == 1) TheTruck = "�ڳ���";
		else if(theworld.FindPicWindowSim(GetPath("�ڳ���"),theworld.GetRect(GetPath("�����ͼ"),CRect(-350,100,500,600)),1.0,2) == 1) TheTruck = "�ڳ���";
		else{
			AfxMessageBox("��ǰ��ͼ���Ҳ����ڳ�");
			exit(-1);
		}
		//Ѱ���ڳ����Ҽ����
		theworld.FindPicAndRightClick(GetPath(TheTruck),theworld.GetRect(GetPath("�����ͼ"),CRect(-350,100,500,600)));
		//�رյ�ͼ
		theworld.KeyPress("M",GetPath("Alt6"),GetPath("Alt8"));
		StopWatch.SetWatchTime(0);
		CheckNotPass();
	}
	return;
}

void CTruck::CheckAndDoTask(){
	while(StopWatch.GetWatchTime() < (unsigned long)seconds * 1000);
	//�����ȡ������ﲻ���ڳ��ڲ��ڸ�����������ȡ������Ǻ����ȷ����û����
	theworld.FindAndClickPic(GetPath("��ȡ����"));
	//���ڵ����ȡ����֮��Ҫ����ȷ�����ӳ٣�������Ҫ�ȴ�����
	Sleep(FindDelay);
	if(theworld.FindPic(GetPath("ȷ��")) == 0){
		//�򿪵�ͼ
		theworld.KeyPress("M",GetPath("Alt6"),GetPath("Alt8"));
		Sleep(100);
		CString TheTruck = "";
		if(theworld.FindPicWindowSim(GetPath("�ڳ���"),theworld.GetRect(GetPath("�����ͼ"),CRect(-350,100,500,600)),1.0,2) == 1) TheTruck = "�ڳ���";
		else if(theworld.FindPicWindowSim(GetPath("�ڳ���"),theworld.GetRect(GetPath("�����ͼ"),CRect(-350,100,500,600)),1.0,2) == 1) TheTruck = "�ڳ���";
		else if(theworld.FindPicWindowSim(GetPath("�ڳ���"),theworld.GetRect(GetPath("�����ͼ"),CRect(-350,100,500,600)),1.0,2) == 1) TheTruck = "�ڳ���";
		else{
			AfxMessageBox("��ǰ��ͼ���Ҳ����ڳ�");
			exit(-1);
		}
		//Ѱ���ڳ����Ҽ����
		theworld.FindPicAndRightClick(GetPath(TheTruck),theworld.GetRect(GetPath("�����ͼ"),CRect(-350,100,500,600)));
		//�رյ�ͼ
		theworld.KeyPress("M",GetPath("Alt6"),GetPath("Alt8"));
		StopWatch.SetWatchTime(0);
		CheckNotPass();
		return;
	}
	
	//���ȷ��
	theworld.FindAndClickPic(GetPath("ȷ��"));
	
	//��������ʼ��
	InitTaskName();
	//���
	KillTarget();
	number++;

	//�����ڳ��Ƿ��ڸ���
	if(theworld.FindStr("�����ڳ�̫Զ��",RedTruck) == 1){
		//�򿪵�ͼ
		theworld.KeyPress("M",GetPath("Alt6"),GetPath("Alt8"));
		Sleep(100);
		CString TheTruck = "";
		if(theworld.FindPicWindowSim(GetPath("�ڳ���"),theworld.GetRect(GetPath("�����ͼ"),CRect(-350,100,500,600)),1.0,2) == 1) TheTruck = "�ڳ���";
		else if(theworld.FindPicWindowSim(GetPath("�ڳ���"),theworld.GetRect(GetPath("�����ͼ"),CRect(-350,100,500,600)),1.0,2) == 1) TheTruck = "�ڳ���";
		else if(theworld.FindPicWindowSim(GetPath("�ڳ���"),theworld.GetRect(GetPath("�����ͼ"),CRect(-350,100,500,600)),1.0,2) == 1) TheTruck = "�ڳ���";
		else{
			AfxMessageBox("��ǰ��ͼ���Ҳ����ڳ�");
			exit(-1);
		}
		//Ѱ���ڳ����Ҽ����
		theworld.FindPicAndRightClick(GetPath(TheTruck),theworld.GetRect(GetPath("�����ͼ"),CRect(-350,100,500,600)));
		//�رյ�ͼ
		theworld.KeyPress("M",GetPath("Alt6"),GetPath("Alt8"));
		Sleep(TaskFind);
	}
	//����
	theworld.KeyPress("X",GetPath("Alt6"),GetPath("Alt8"));
	Sleep(FindDelay * 2);
	//���ͨ��
	CheckPass();
	ExecuteFun();
	return;
}

void CTruck::CheckAndCompleteTask(){
	while(StopWatch.GetWatchTime() < (unsigned long)seconds * 1000);
	//���Ѻ�ڶԻ�
	theworld.FindAndClickPic(GetPath("Ѻ�ڶԻ�"));
	//���ڳ���ȷ�������ӳ٣����Եȴ�����
	Sleep(FindDelay);
	if(theworld.FindPic(GetPath("ȷ��")) == 0){
		//�򿪵�ͼ
		theworld.KeyPress("M",GetPath("Alt6"),GetPath("Alt8"));
		Sleep(100);
		CString TheTruck = "";
		if(theworld.FindPicWindowSim(GetPath("�ڳ���"),theworld.GetRect(GetPath("�����ͼ"),CRect(-350,100,500,600)),1.0,2) == 1) TheTruck = "�ڳ���";
		else if(theworld.FindPicWindowSim(GetPath("�ڳ���"),theworld.GetRect(GetPath("�����ͼ"),CRect(-350,100,500,600)),1.0,2) == 1) TheTruck = "�ڳ���";
		else if(theworld.FindPicWindowSim(GetPath("�ڳ���"),theworld.GetRect(GetPath("�����ͼ"),CRect(-350,100,500,600)),1.0,2) == 1) TheTruck = "�ڳ���";
		else{
			AfxMessageBox("��ǰ��ͼ���Ҳ����ڳ�");
			exit(-1);
		}
		//Ѱ���ڳ����Ҽ����
		theworld.FindPicAndRightClick(GetPath(TheTruck),theworld.GetRect(GetPath("�����ͼ"),CRect(-350,100,500,600)));
		//�رյ�ͼ
		theworld.KeyPress("M",GetPath("Alt6"),GetPath("Alt8"));
		StopWatch.SetWatchTime(0);
		CheckNotPass();
		return;
	}
	//���ȷ��
	theworld.FindAndClickPic(GetPath("ȷ��"));
	//��������±�
	theworld.KeyPress("L",GetPath("Alt6"),GetPath("Alt8"));
	//��ֹ�����ӳ�
	Sleep(FindDelay);
	//��������ھ��ڳ�Ѻ��
	if(theworld.FindPic(GetPath("�����ھ��ڳ�Ѻ�ͺ�")) == 1) theworld.FindAndClickPic(GetPath("�����ھ��ڳ�Ѻ�ͺ�"));
	else theworld.FindAndClickPic(GetPath("�����ھ��ڳ�Ѻ��"));
	theworld.FindAndClickPic(GetPath("����"));
	//�ر�������±�
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
	//����step��Ϊ�˲���ʱ��������
	if(number == 1 || step <= 10){
		Target1 = "Ұ��";
		Target2 = "�����ȷ�";
		Target3 = "��������";
	}
	if(number == 2 || (step > 10 && step <= 18)){
		Target1 = "����ɮ";
		Target2 = "����";
		Target3 = "����";
	}
	if(number == 3 || step >18){
		Target1 = "�ڲ�ì��";
		Target2 = "�ڲ�ʿ��";
		Target3 = "����";
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
	else if(step ==  3) GoToThePicAndCheck("����һ��",37,1);
	else if(step ==  4) GoToThePicAndCheck("����ĩβ",36,1);
	else if(step ==  5) GoOutMap("����","������");

	else if(step ==  6) GoToThePicAndCheck("������һ��",26,1);
	else if(step ==  7) GoToThePicAndCheck("���������",28,1);
	else if(step ==  8) GoToThePicAndCheck("�����ھֽ��츣",32,2);
	else if(step ==  9) GoToThePicAndCheck("����������",32,1);
	else if(step == 10) GoToThePicAndCheck("������ĩβ",19,1);
	else if(step == 11) GoOutMap("������","�滨��");

	else if(step == 12) GoToThePicAndCheck("�滨��һ��",31,1);
	else if(step == 13) GoToThePicAndCheck("�滨�ȶ���",34,1);
	else if(step == 14) GoToThePicAndCheck("�����ھ�Ԭ��»",24,2);
	else if(step == 15) GoToThePicAndCheck("�滨������",30,1);
	else if(step == 16) GoToThePicAndCheck("�滨��ĩβ",18,1);
	else if(step == 17) GoOutMap("�滨��","����կ");

	else if(step == 18) GoToThePicAndCheck("����կһ��",22,1);
	else if(step == 19) GoToThePicAndCheck("����կ����",28,1);
	else if(step == 20) GoToThePicAndCheck("����կ����",29,1);
	else if(step == 21) GoToThePicAndCheck("�����ھ�������",36,2);
	else if(step == 22) GoToThePicAndCheck("����կ�Ķ�",33,1);
	else if(step == 23) GoToThePicAndCheck("����կĩβ",35,1);
	else if(step == 24) GoOutMap("����կ","���ɽ");

	else if(step == 25) GoToThePicAndCheck("���ɽһ��",31,1);
	else if(step == 26) GoToThePicAndCheck("���ɽ����",27,1);
	else if(step == 27) GoToThePicAndCheck("���ɽ����",25,1);
	else if(step == 28) GoToThePicAndCheck("���ɽ�Ķ�",33,1);
	else if(step == 29) GoToThePicAndCheck("���ɽĩβ",27,1);
	else if(step == 30) GoOutMap("���ɽ","�ɶ�");

	else if(step == 31) GoToThePicAndCheck("�ɶ�һ��",26,1);
	else if(step == 32) GoToThePicAndCheck("�ɶ�����",40,1);
	else if(step == 33) GoToThePicAndCheck("������",35,3);
	return;
}

