// VideoMFCDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "RecordVideoActiveX.h"
#include "VideoMFCDlg.h"
#include "afxdialogex.h"

CvCapture* capture;
CRect rect;
CDC *pDC;
HDC hDC;
CWnd *pwnd;

CvVideoWriter* writer = 0;

// CVideoMFCDlg 对话框

IMPLEMENT_DYNAMIC(CVideoMFCDlg, CDialogEx)

CVideoMFCDlg::CVideoMFCDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CVideoMFCDlg::IDD, pParent)
{

}

CVideoMFCDlg::~CVideoMFCDlg()
{
}

void CVideoMFCDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CVideoMFCDlg, CDialogEx)
	ON_BN_CLICKED(IDD_START_BUTTON, &CVideoMFCDlg::OnBnClickedStartButton)
	ON_BN_CLICKED(IDD_STOP_BUTTON, &CVideoMFCDlg::OnBnClickedStopButton)
	ON_WM_TIMER()
	ON_COMMAND(IDCLOSE, &CVideoMFCDlg::OnIdclose)
END_MESSAGE_MAP()


// CVideoMFCDlg 消息处理程序


void CVideoMFCDlg::OnBnClickedStartButton()
{
	// TODO: 在此添加控件通知处理程序代码

	//AfxMessageBox("OK");
	if(!capture)
	{
		capture = cvCaptureFromCAM(0);
		//AfxMessageBox("OK");
	}

	if (!capture)
	{
		//AfxMessageBox("无法打开摄像头");
		return;
	}
	writer=cvCreateVideoWriter("MyVideo.avi",CV_FOURCC('X','V','I','D'),25,cvSize(640,480));
	// 测试
	IplImage* m_Frame;
	m_Frame=cvQueryFrame(capture);
	CvvImage m_CvvImage;
	m_CvvImage.CopyOf(m_Frame,1);	
	if (true)
	{
		m_CvvImage.DrawToHDC(hDC, &rect);
		//cvWaitKey(10);
	}

	// 设置计时器,每10ms触发一次事件
	SetTimer(1,10,NULL);
}


void CVideoMFCDlg::OnBnClickedStopButton()
{
	// TODO: 在此添加控件通知处理程序代码

	cvReleaseVideoWriter(&writer);
	cvReleaseCapture(&capture);
	CDC MemDC; 
	CBitmap m_Bitmap1;
	m_Bitmap1.LoadBitmap(IDB_BITMAP1); 
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(&m_Bitmap1);
	pDC->StretchBlt(rect.left,rect.top,rect.Width(),rect.Height(),&MemDC,0,0,48,48,SRCCOPY); 
}


BOOL CVideoMFCDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	pwnd = GetDlgItem(IDC_ShowImage);
	//pwnd->MoveWindow(35,30,352,288);
    pDC =pwnd->GetDC();
	//pDC =GetDC();
    hDC= pDC->GetSafeHdc();
	pwnd->GetClientRect(&rect);

	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常: OCX 属性页应返回 FALSE
}


void CVideoMFCDlg::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	/************************************************************************/
	/* 显示摄像头                                                           */
	/************************************************************************/
	IplImage* m_Frame;
	m_Frame=cvQueryFrame(capture);
	CvvImage m_CvvImage;
	m_CvvImage.CopyOf(m_Frame,1);	
	if (true)
	{
		m_CvvImage.DrawToHDC(hDC, &rect);
		cvWriteFrame(writer,m_Frame);
		//cvWaitKey(10);
	}

	CDialogEx::OnTimer(nIDEvent);
}


void CVideoMFCDlg::OnIdclose()
{
	// TODO: 在此添加命令处理程序代码
	cvReleaseCapture(&capture);
	CDialogEx::OnClose();
}
