#pragma once

// SetTipOcxCtrl.h : CSetTipOcxCtrl ActiveX �ؼ����������


// CSetTipOcxCtrl : �й�ʵ�ֵ���Ϣ������� SetTipOcxCtrl.cpp��

class CSetTipOcxCtrl : public COleControl
{
	DECLARE_DYNCREATE(CSetTipOcxCtrl)

// ���캯��
public:
	CSetTipOcxCtrl();

// ��д
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// ʵ��
protected:
	~CSetTipOcxCtrl();

	DECLARE_OLECREATE_EX(CSetTipOcxCtrl)    // �๤���� guid
	DECLARE_OLETYPELIB(CSetTipOcxCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CSetTipOcxCtrl)     // ����ҳ ID
	DECLARE_OLECTLTYPE(CSetTipOcxCtrl)		// �������ƺ�����״̬

// ��Ϣӳ��
	DECLARE_MESSAGE_MAP()

// ����ӳ��
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// �¼�ӳ��
	DECLARE_EVENT_MAP()

// ���Ⱥ��¼� ID
public:
	enum {
		dispiduninit = 3L,
		dispidshow = 2L,
		dispidinit = 1L
	};
protected:
	void init(void);
	void show(LPCTSTR strText);
	void uninit(void);
};

