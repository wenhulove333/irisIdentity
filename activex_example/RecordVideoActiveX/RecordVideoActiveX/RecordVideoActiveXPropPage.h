#pragma once

// RecordVideoActiveXPropPage.h : CRecordVideoActiveXPropPage ����ҳ���������


// CRecordVideoActiveXPropPage : �й�ʵ�ֵ���Ϣ������� RecordVideoActiveXPropPage.cpp��

class CRecordVideoActiveXPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CRecordVideoActiveXPropPage)
	DECLARE_OLECREATE_EX(CRecordVideoActiveXPropPage)

// ���캯��
public:
	CRecordVideoActiveXPropPage();

// �Ի�������
	enum { IDD = IDD_PROPPAGE_RECORDVIDEOACTIVEX };

// ʵ��
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ��Ϣӳ��
protected:
	DECLARE_MESSAGE_MAP()
};

