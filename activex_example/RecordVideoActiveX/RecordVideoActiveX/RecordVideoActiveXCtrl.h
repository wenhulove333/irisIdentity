#pragma once
#include "VideoMFCDlg.h"

// RecordVideoActiveXCtrl.h : CRecordVideoActiveXCtrl ActiveX �ؼ����������


// CRecordVideoActiveXCtrl : �й�ʵ�ֵ���Ϣ������� RecordVideoActiveXCtrl.cpp��

class CRecordVideoActiveXCtrl : public COleControl
{
	DECLARE_DYNCREATE(CRecordVideoActiveXCtrl)

// ���캯��
public:
	CRecordVideoActiveXCtrl();
	CVideoMFCDlg m_VideoMFCDlg;

// ��д
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// ʵ��
protected:
	~CRecordVideoActiveXCtrl();

	DECLARE_OLECREATE_EX(CRecordVideoActiveXCtrl)    // �๤���� guid
	DECLARE_OLETYPELIB(CRecordVideoActiveXCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CRecordVideoActiveXCtrl)     // ����ҳ ID
	DECLARE_OLECTLTYPE(CRecordVideoActiveXCtrl)		// �������ƺ�����״̬

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
		dispidrecordVideo = 1L
	};
protected:
	void recordVideo(void);
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
};

