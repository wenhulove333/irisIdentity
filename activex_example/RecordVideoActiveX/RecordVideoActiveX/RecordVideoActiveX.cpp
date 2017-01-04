// RecordVideoActiveX.cpp : CRecordVideoActiveXApp �� DLL ע���ʵ�֡�

#include "stdafx.h"
#include "RecordVideoActiveX.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CRecordVideoActiveXApp theApp;

const GUID CDECL _tlid = { 0x2114D76E, 0x1272, 0x4289, { 0xB2, 0x0, 0xDA, 0xE0, 0x71, 0x2C, 0x4E, 0xE9 } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CRecordVideoActiveXApp::InitInstance - DLL ��ʼ��

BOOL CRecordVideoActiveXApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: �ڴ�������Լ���ģ���ʼ�����롣
	}

	return bInit;
}



// CRecordVideoActiveXApp::ExitInstance - DLL ��ֹ

int CRecordVideoActiveXApp::ExitInstance()
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
