// SetTipOcx.cpp : CSetTipOcxApp �� DLL ע���ʵ�֡�

#include "stdafx.h"
#include "SetTipOcx.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CSetTipOcxApp theApp;

const GUID CDECL _tlid = { 0x2EA857A6, 0x6F8A, 0x45A4, { 0xB7, 0xF1, 0x12, 0x37, 0x94, 0x89, 0x50, 0xFC } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CSetTipOcxApp::InitInstance - DLL ��ʼ��

BOOL CSetTipOcxApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: �ڴ�������Լ���ģ���ʼ�����롣
	}

	return bInit;
}



// CSetTipOcxApp::ExitInstance - DLL ��ֹ

int CSetTipOcxApp::ExitInstance()
{
	// TODO: �ڴ�������Լ���ģ����ֹ���롣

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - ������ӵ�ϵͳע���

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - �����ϵͳע������Ƴ�

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
