#pragma once

// RecordVideoActiveXPropPage.h : CRecordVideoActiveXPropPage 属性页类的声明。


// CRecordVideoActiveXPropPage : 有关实现的信息，请参阅 RecordVideoActiveXPropPage.cpp。

class CRecordVideoActiveXPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CRecordVideoActiveXPropPage)
	DECLARE_OLECREATE_EX(CRecordVideoActiveXPropPage)

// 构造函数
public:
	CRecordVideoActiveXPropPage();

// 对话框数据
	enum { IDD = IDD_PROPPAGE_RECORDVIDEOACTIVEX };

// 实现
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 消息映射
protected:
	DECLARE_MESSAGE_MAP()
};

