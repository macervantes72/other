// SetTipOcxCtrl.cpp : CSetTipOcxCtrl ActiveX �ؼ����ʵ�֡�

#include "stdafx.h"
#include "SetTipOcx.h"
#include "SetTipOcxCtrl.h"
#include "SetTipOcxPropPage.h"
#include "afxdialogex.h"
#include "CGetPath/CGetPathAPI.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CSetTipOcxCtrl, COleControl)

// ��Ϣӳ��

BEGIN_MESSAGE_MAP(CSetTipOcxCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()

// ����ӳ��

BEGIN_DISPATCH_MAP(CSetTipOcxCtrl, COleControl)
	DISP_FUNCTION_ID(CSetTipOcxCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION_ID(CSetTipOcxCtrl, "init", dispidinit, init, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION_ID(CSetTipOcxCtrl, "show", dispidshow, show, VT_EMPTY, VTS_BSTR)
	DISP_FUNCTION_ID(CSetTipOcxCtrl, "uninit", dispiduninit, uninit, VT_EMPTY, VTS_NONE)
END_DISPATCH_MAP()

// �¼�ӳ��

BEGIN_EVENT_MAP(CSetTipOcxCtrl, COleControl)
END_EVENT_MAP()

// ����ҳ

// TODO: ����Ҫ��Ӹ�������ҳ�����ס���Ӽ���!
BEGIN_PROPPAGEIDS(CSetTipOcxCtrl, 1)
	PROPPAGEID(CSetTipOcxPropPage::guid)
END_PROPPAGEIDS(CSetTipOcxCtrl)

// ��ʼ���๤���� guid

IMPLEMENT_OLECREATE_EX(CSetTipOcxCtrl, "SETTIPOCX.SetTipOcxCtrl.1",
	0x93ba3e69, 0x5e03, 0x4aea, 0xac, 0x5b, 0x99, 0xfc, 0x4e, 0x2, 0xb1, 0x2f)

// ����� ID �Ͱ汾

IMPLEMENT_OLETYPELIB(CSetTipOcxCtrl, _tlid, _wVerMajor, _wVerMinor)

// �ӿ� ID

const IID IID_DSetTipOcx = { 0x6C149F97, 0x4F38, 0x437D, { 0x8E, 0xE3, 0x87, 0x34, 0x30, 0x2A, 0x6F, 0x99 } };
const IID IID_DSetTipOcxEvents = { 0xD80C0124, 0x300, 0x4DC4, { 0x9D, 0x1C, 0x55, 0x64, 0x2, 0x35, 0xFF, 0xB4 } };

// �ؼ�������Ϣ

static const DWORD _dwSetTipOcxOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CSetTipOcxCtrl, IDS_SETTIPOCX, _dwSetTipOcxOleMisc)

// CSetTipOcxCtrl::CSetTipOcxCtrlFactory::UpdateRegistry -
// ��ӻ��Ƴ� CSetTipOcxCtrl ��ϵͳע�����
#include <objsafe.h>
#include "helpers.h"

BOOL CSetTipOcxCtrl::CSetTipOcxCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: ��֤���Ŀؼ��Ƿ���ϵ�Ԫģ���̴߳������
	// �йظ�����Ϣ����ο� MFC ����˵�� 64��
	// ������Ŀؼ������ϵ�Ԫģ�͹�����
	// �����޸����´��룬��������������
	// afxRegApartmentThreading ��Ϊ 0��

	if (bRegister){
		BOOL retval = AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_SETTIPOCX,
			IDB_SETTIPOCX,
			afxRegApartmentThreading,
			_dwSetTipOcxOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);

		// mark as safe for scripting--failure OK
		HRESULT hr = CreateComponentCategory(CATID_SafeForScripting, 
			L"Controls that are safely scriptable");

		if (SUCCEEDED(hr))
			// only register if category exists
				RegisterCLSIDInCategory(m_clsid, CATID_SafeForScripting);
		// don't care if this call fails

		// mark as safe for data initialization
		hr = CreateComponentCategory(CATID_SafeForInitializing, 
			L"Controls safely initializable from persistent data");

		if (SUCCEEDED(hr))
			// only register if category exists
				RegisterCLSIDInCategory(m_clsid, CATID_SafeForInitializing);
		// don't care if this call fails
		return retval;
	}
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}


// CSetTipOcxCtrl::CSetTipOcxCtrl - ���캯��

CSetTipOcxCtrl::CSetTipOcxCtrl()
{
	InitializeIIDs(&IID_DSetTipOcx, &IID_DSetTipOcxEvents);
	// TODO: �ڴ˳�ʼ���ؼ���ʵ�����ݡ�
}

// CSetTipOcxCtrl::~CSetTipOcxCtrl - ��������

CSetTipOcxCtrl::~CSetTipOcxCtrl()
{
	// TODO: �ڴ�����ؼ���ʵ�����ݡ�
}

// CSetTipOcxCtrl::OnDraw - ��ͼ����

void CSetTipOcxCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	if (!pdc)
		return;

	// TODO: �����Լ��Ļ�ͼ�����滻����Ĵ��롣
	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	pdc->Ellipse(rcBounds);
}

// CSetTipOcxCtrl::DoPropExchange - �־���֧��

void CSetTipOcxCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Ϊÿ���־õ��Զ������Ե��� PX_ ������
}


// CSetTipOcxCtrl::OnResetState - ���ؼ�����ΪĬ��״̬

void CSetTipOcxCtrl::OnResetState()
{
	COleControl::OnResetState();  // ���� DoPropExchange ���ҵ���Ĭ��ֵ

	// TODO: �ڴ��������������ؼ�״̬��
}


// CSetTipOcxCtrl::AboutBox - ���û���ʾ�����ڡ���

void CSetTipOcxCtrl::AboutBox()
{
	CDialogEx dlgAbout(IDD_ABOUTBOX_SETTIPOCX);
	dlgAbout.DoModal();
}


// CSetTipOcxCtrl ��Ϣ�������


void CSetTipOcxCtrl::init(void)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	//TODO: �ڴ���ӵ��ȴ���������
	CGetPath get;
	CString strOcxPath = get.GetRegOcxPath("93BA3E69-5E03-4AEA-AC5B-99FC4E02B12F");
	ShellExecute(NULL, _T("open"), "\"" + strOcxPath + "Tip.exe\"", NULL, NULL, SW_HIDE);
	return;
}


void CSetTipOcxCtrl::show(LPCTSTR strText)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	//TODO: �ڴ���ӵ��ȴ���������
	//������Tip.exe���̣���Ϊ�ý���������һ������ȡ����û�������Ϣ
	CGetPath get;
	HWND hwnd = get.GetHwndByProcessId(get.GetProcessID("Tip.exe").at(0));
	int length = strlen(strText);
	char* pszText = (char*)calloc(length + 1,1);
	memcpy(pszText,strText,strlen(strText));
	COPYDATASTRUCT cpd; // ��COPYDATASTRUCT�ṹ��ֵ
	cpd.dwData = 0;
	cpd.cbData = length + 1;
	cpd.lpData = pszText;
	::SendMessage(hwnd,WM_COPYDATA,NULL,(LPARAM)&cpd);
	free(pszText);
	return;
}


void CSetTipOcxCtrl::uninit(void)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	// TODO: �ڴ���ӵ��ȴ���������
	CGetPath get;
	HWND hwnd = get.GetHwndByProcessId(get.GetProcessID("Tip.exe").at(0));
	::SendMessage(hwnd,10003,NULL,NULL);
	return;
}
