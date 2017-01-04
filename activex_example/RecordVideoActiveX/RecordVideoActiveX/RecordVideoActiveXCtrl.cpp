// RecordVideoActiveXCtrl.cpp : CRecordVideoActiveXCtrl ActiveX 控件类的实现。

#include "stdafx.h"
#include "RecordVideoActiveX.h"
#include "RecordVideoActiveXCtrl.h"
#include "RecordVideoActiveXPropPage.h"
#include "afxdialogex.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CRecordVideoActiveXCtrl, COleControl)



// 消息映射

BEGIN_MESSAGE_MAP(CRecordVideoActiveXCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
	ON_WM_CREATE()
	ON_WM_SIZE()
END_MESSAGE_MAP()



// 调度映射

BEGIN_DISPATCH_MAP(CRecordVideoActiveXCtrl, COleControl)
	DISP_FUNCTION_ID(CRecordVideoActiveXCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION_ID(CRecordVideoActiveXCtrl, "recordVideo", dispidrecordVideo, recordVideo, VT_EMPTY, VTS_NONE)
END_DISPATCH_MAP()



// 事件映射

BEGIN_EVENT_MAP(CRecordVideoActiveXCtrl, COleControl)
END_EVENT_MAP()



// 属性页

// TODO: 按需要添加更多属性页。请记住增加计数!
BEGIN_PROPPAGEIDS(CRecordVideoActiveXCtrl, 1)
	PROPPAGEID(CRecordVideoActiveXPropPage::guid)
END_PROPPAGEIDS(CRecordVideoActiveXCtrl)



// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(CRecordVideoActiveXCtrl, "RECORDVIDEOACTIV.RecordVideoActivCtrl.1",
	0x11e94b42, 0x68fd, 0x4960, 0xa3, 0x6, 0x74, 0xc6, 0xa3, 0x57, 0xef, 0x65)



// 键入库 ID 和版本

IMPLEMENT_OLETYPELIB(CRecordVideoActiveXCtrl, _tlid, _wVerMajor, _wVerMinor)



// 接口 ID

const IID IID_DRecordVideoActiveX = { 0xCC4D8743, 0x98AF, 0x459D, { 0xA9, 0x63, 0x7E, 0xD1, 0x99, 0x7A, 0xBF, 0x3D } };
const IID IID_DRecordVideoActiveXEvents = { 0x981F13F5, 0xF0D8, 0x4890, { 0x92, 0x9F, 0x7, 0x5E, 0x2F, 0x64, 0x58, 0xA4 } };


// 控件类型信息

static const DWORD _dwRecordVideoActiveXOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CRecordVideoActiveXCtrl, IDS_RECORDVIDEOACTIVEX, _dwRecordVideoActiveXOleMisc)



// CRecordVideoActiveXCtrl::CRecordVideoActiveXCtrlFactory::UpdateRegistry -
// 添加或移除 CRecordVideoActiveXCtrl 的系统注册表项

BOOL CRecordVideoActiveXCtrl::CRecordVideoActiveXCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: 验证您的控件是否符合单元模型线程处理规则。
	// 有关更多信息，请参考 MFC 技术说明 64。
	// 如果您的控件不符合单元模型规则，则
	// 必须修改如下代码，将第六个参数从
	// afxRegApartmentThreading 改为 0。

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



// CRecordVideoActiveXCtrl::CRecordVideoActiveXCtrl - 构造函数

CRecordVideoActiveXCtrl::CRecordVideoActiveXCtrl()
{
	InitializeIIDs(&IID_DRecordVideoActiveX, &IID_DRecordVideoActiveXEvents);
	// TODO: 在此初始化控件的实例数据。
}



// CRecordVideoActiveXCtrl::~CRecordVideoActiveXCtrl - 析构函数

CRecordVideoActiveXCtrl::~CRecordVideoActiveXCtrl()
{
	// TODO: 在此清理控件的实例数据。
}



// CRecordVideoActiveXCtrl::OnDraw - 绘图函数

void CRecordVideoActiveXCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	if (!pdc)
		return;

	// TODO: 用您自己的绘图代码替换下面的代码。
	//pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	//pdc->Ellipse(rcBounds);
	m_VideoMFCDlg.MoveWindow(rcBounds, TRUE);
}



// CRecordVideoActiveXCtrl::DoPropExchange - 持久性支持

void CRecordVideoActiveXCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: 为每个持久的自定义属性调用 PX_ 函数。
}



// CRecordVideoActiveXCtrl::OnResetState - 将控件重置为默认状态

void CRecordVideoActiveXCtrl::OnResetState()
{
	COleControl::OnResetState();  // 重置 DoPropExchange 中找到的默认值

	// TODO: 在此重置任意其他控件状态。
}



// CRecordVideoActiveXCtrl::AboutBox - 向用户显示“关于”框

void CRecordVideoActiveXCtrl::AboutBox()
{
	CDialogEx dlgAbout(IDD_ABOUTBOX_RECORDVIDEOACTIVEX);
	dlgAbout.DoModal();
}



// CRecordVideoActiveXCtrl 消息处理程序


void CRecordVideoActiveXCtrl::recordVideo(void)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	// TODO: 在此添加调度处理程序代码
}


int CRecordVideoActiveXCtrl::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (COleControl::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  在此添加您专用的创建代码
	m_VideoMFCDlg.Create(IDD_VIDEOMFC_DIALOG, this);
	return 0;
}


void CRecordVideoActiveXCtrl::OnSize(UINT nType, int cx, int cy)
{
	COleControl::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码
	RECT activeXRect;
	GetClientRect(&activeXRect);
	m_VideoMFCDlg.MoveWindow(&activeXRect);
}
