#pragma once

#include "cv.h"
#include "highgui.h"
#include "CvvImage.h"

// CVideoMFCDlg �Ի���

class CVideoMFCDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CVideoMFCDlg)

public:
	CVideoMFCDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CVideoMFCDlg();

// �Ի�������
	enum { IDD = IDD_VIDEOMFC_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedStartButton();
	afx_msg void OnBnClickedStopButton();
	virtual BOOL OnInitDialog();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnIdclose();
};
