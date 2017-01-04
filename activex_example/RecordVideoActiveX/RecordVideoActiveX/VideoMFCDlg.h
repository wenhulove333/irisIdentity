#pragma once

#include "cv.h"
#include "highgui.h"
#include "CvvImage.h"

// CVideoMFCDlg 对话框

class CVideoMFCDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CVideoMFCDlg)

public:
	CVideoMFCDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CVideoMFCDlg();

// 对话框数据
	enum { IDD = IDD_VIDEOMFC_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedStartButton();
	afx_msg void OnBnClickedStopButton();
	virtual BOOL OnInitDialog();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnIdclose();
};
