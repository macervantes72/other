#pragma once

// SetTipOcxPropPage.h : CSetTipOcxPropPage ����ҳ���������


// CSetTipOcxPropPage : �й�ʵ�ֵ���Ϣ������� SetTipOcxPropPage.cpp��

class CSetTipOcxPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CSetTipOcxPropPage)
	DECLARE_OLECREATE_EX(CSetTipOcxPropPage)

// ���캯��
public:
	CSetTipOcxPropPage();

// �Ի�������
	enum { IDD = IDD_PROPPAGE_SETTIPOCX };

// ʵ��
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ��Ϣӳ��
protected:
	DECLARE_MESSAGE_MAP()
};

