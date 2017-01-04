#pragma once
#include "VideoMFCDlg.h"

// RecordVideoActiveXCtrl.h : CRecordVideoActiveXCtrl ActiveX 控件类的声明。


// CRecordVideoActiveXCtrl : 有关实现的信息，请参阅 RecordVideoActiveXCtrl.cpp。

class CRecordVideoActiveXCtrl : public COleControl
{
	DECLARE_DYNCREATE(CRecordVideoActiveXCtrl)

// 构造函数
public:
	CRecordVideoActiveXCtrl();
	CVideoMFCDlg m_VideoMFCDlg;

// 重写
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// 实现
protected:
	~CRecordVideoActiveXCtrl();

	DECLARE_OLECREATE_EX(CRecordVideoActiveXCtrl)    // 类工厂和 guid
	DECLARE_OLETYPELIB(CRecordVideoActiveXCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CRecordVideoActiveXCtrl)     // 属性页 ID
	DECLARE_OLECTLTYPE(CRecordVideoActiveXCtrl)		// 类型名称和杂项状态

// 消息映射
	DECLARE_MESSAGE_MAP()

// 调度映射
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// 事件映射
	DECLARE_EVENT_MAP()

// 调度和事件 ID
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

