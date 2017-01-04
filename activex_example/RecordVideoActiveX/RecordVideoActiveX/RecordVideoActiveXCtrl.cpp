// RecordVideoActiveXCtrl.cpp : CRecordVideoActiveXCtrl ActiveX �ؼ����ʵ�֡�

#include "stdafx.h"
#include "RecordVideoActiveX.h"
#include "RecordVideoActiveXCtrl.h"
#include "RecordVideoActiveXPropPage.h"
#include "afxdialogex.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CRecordVideoActiveXCtrl, COleControl)



// ��Ϣӳ��

BEGIN_MESSAGE_MAP(CRecordVideoActiveXCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
	ON_WM_CREATE()
	ON_WM_SIZE()
END_MESSAGE_MAP()



// ����ӳ��

BEGIN_DISPATCH_MAP(CRecordVideoActiveXCtrl, COleControl)
	DISP_FUNCTION_ID(CRecordVideoActiveXCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION_ID(CRecordVideoActiveXCtrl, "recordVideo", dispidrecordVideo, recordVideo, VT_EMPTY, VTS_NONE)
END_DISPATCH_MAP()



// �¼�ӳ��

BEGIN_EVENT_MAP(CRecordVideoActiveXCtrl, COleControl)
END_EVENT_MAP()



// ����ҳ

// TODO: ����Ҫ��Ӹ�������ҳ�����ס���Ӽ���!
BEGIN_PROPPAGEIDS(CRecordVideoActiveXCtrl, 1)
	PROPPAGEID(CRecordVideoActiveXPropPage::guid)
END_PROPPAGEIDS(CRecordVideoActiveXCtrl)



// ��ʼ���๤���� guid

IMPLEMENT_OLECREATE_EX(CRecordVideoActiveXCtrl, "RECORDVIDEOACTIV.RecordVideoActivCtrl.1",
	0x11e94b42, 0x68fd, 0x4960, 0xa3, 0x6, 0x74, 0xc6, 0xa3, 0x57, 0xef, 0x65)



// ����� ID �Ͱ汾

IMPLEMENT_OLETYPELIB(CRecordVideoActiveXCtrl, _tlid, _wVerMajor, _wVerMinor)



// �ӿ� ID

const IID IID_DRecordVideoActiveX = { 0xCC4D8743, 0x98AF, 0x459D, { 0xA9, 0x63, 0x7E, 0xD1, 0x99, 0x7A, 0xBF, 0x3D } };
const IID IID_DRecordVideoActiveXEvents = { 0x981F13F5, 0xF0D8, 0x4890, { 0x92, 0x9F, 0x7, 0x5E, 0x2F, 0x64, 0x58, 0xA4 } };


// �ؼ�������Ϣ

static const DWORD _dwRecordVideoActiveXOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CRecordVideoActiveXCtrl, IDS_RECORDVIDEOACTIVEX, _dwRecordVideoActiveXOleMisc)



// CRecordVideoActiveXCtrl::CRecordVideoActiveXCtrlFactory::UpdateRegistry -
// ��ӻ��Ƴ� CRecordVideoActiveXCtrl ��ϵͳע�����

BOOL CRecordVideoActiveXCtrl::CRecordVideoActiveXCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: ��֤���Ŀؼ��Ƿ���ϵ�Ԫģ���̴߳������
	// �йظ�����Ϣ����ο� MFC ����˵�� 64��
	// ������Ŀؼ������ϵ�Ԫģ�͹�����
	// �����޸����´��룬��������������
	// afxRegApartmentThreading ��Ϊ 0��

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_RECORDVIDEOACTIVEX,
			IDB_RECORDVIDEOACTIVEX,
			afxRegApartmentThreading,
			_dwRecordVideoActiveXOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}



// CRecordVideoActiveXCtrl::CRecordVideoActiveXCtrl - ���캯��

CRecordVideoActiveXCtrl::CRecordVideoActiveXCtrl()
{
	InitializeIIDs(&IID_DRecordVideoActiveX, &IID_DRecordVideoActiveXEvents);
	// TODO: �ڴ˳�ʼ���ؼ���ʵ�����ݡ�
}



// CRecordVideoActiveXCtrl::~CRecordVideoActiveXCtrl - ��������

CRecordVideoActiveXCtrl::~CRecordVideoActiveXCtrl()
{
	// TODO: �ڴ�����ؼ���ʵ�����ݡ�
}



// CRecordVideoActiveXCtrl::OnDraw - ��ͼ����

void CRecordVideoActiveXCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	if (!pdc)
		return;

	// TODO: �����Լ��Ļ�ͼ�����滻����Ĵ��롣
	//pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	//pdc->Ellipse(rcBounds);
	m_VideoMFCDlg.MoveWindow(rcBounds, TRUE);
}



// CRecordVideoActiveXCtrl::DoPropExchange - �־���֧��

void CRecordVideoActiveXCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Ϊÿ���־õ��Զ������Ե��� PX_ ������
}



// CRecordVideoActiveXCtrl::OnResetState - ���ؼ�����ΪĬ��״̬

void CRecordVideoActiveXCtrl::OnResetState()
{
	COleControl::OnResetState();  // ���� DoPropExchange ���ҵ���Ĭ��ֵ

	// TODO: �ڴ��������������ؼ�״̬��
}



// CRecordVideoActiveXCtrl::AboutBox - ���û���ʾ�����ڡ���

void CRecordVideoActiveXCtrl::AboutBox()
{
	CDialogEx dlgAbout(IDD_ABOUTBOX_RECORDVIDEOACTIVEX);
	dlgAbout.DoModal();
}



// CRecordVideoActiveXCtrl ��Ϣ�������


void CRecordVideoActiveXCtrl::recordVideo(void)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	// TODO: �ڴ���ӵ��ȴ���������
}


int CRecordVideoActiveXCtrl::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (COleControl::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  �ڴ������ר�õĴ�������
	m_VideoMFCDlg.Create(IDD_VIDEOMFC_DIALOG, this);
	return 0;
}


void CRecordVideoActiveXCtrl::OnSize(UINT nType, int cx, int cy)
{
	COleControl::OnSize(nType, cx, cy);

	// TODO: �ڴ˴������Ϣ����������
	RECT activeXRect;
	GetClientRect(&activeXRect);
	m_VideoMFCDlg.MoveWindow(&activeXRect);
}
