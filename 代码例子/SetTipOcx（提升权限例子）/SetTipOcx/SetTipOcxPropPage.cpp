// SetTipOcxPropPage.cpp : CSetTipOcxPropPage ����ҳ���ʵ�֡�

#include "stdafx.h"
#include "SetTipOcx.h"
#include "SetTipOcxPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CSetTipOcxPropPage, COlePropertyPage)

// ��Ϣӳ��

BEGIN_MESSAGE_MAP(CSetTipOcxPropPage, COlePropertyPage)
END_MESSAGE_MAP()

// ��ʼ���๤���� guid

IMPLEMENT_OLECREATE_EX(CSetTipOcxPropPage, "SETTIPOCX.SetTipOcxPropPage.1",
	0x6b9bc337, 0xff57, 0x4b95, 0x88, 0xfe, 0x59, 0x20, 0x8b, 0x42, 0x54, 0xfd)

// CSetTipOcxPropPage::CSetTipOcxPropPageFactory::UpdateRegistry -
// ��ӻ��Ƴ� CSetTipOcxPropPage ��ϵͳע�����

BOOL CSetTipOcxPropPage::CSetTipOcxPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_SETTIPOCX_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}

// CSetTipOcxPropPage::CSetTipOcxPropPage - ���캯��

CSetTipOcxPropPage::CSetTipOcxPropPage() :
	COlePropertyPage(IDD, IDS_SETTIPOCX_PPG_CAPTION)
{
}

// CSetTipOcxPropPage::DoDataExchange - ��ҳ�����Լ��ƶ�����

void CSetTipOcxPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}

// CSetTipOcxPropPage ��Ϣ�������
