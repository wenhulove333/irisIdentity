// RecordVideoActiveXPropPage.cpp : CRecordVideoActiveXPropPage ����ҳ���ʵ�֡�

#include "stdafx.h"
#include "RecordVideoActiveX.h"
#include "RecordVideoActiveXPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CRecordVideoActiveXPropPage, COlePropertyPage)



// ��Ϣӳ��

BEGIN_MESSAGE_MAP(CRecordVideoActiveXPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// ��ʼ���๤���� guid

IMPLEMENT_OLECREATE_EX(CRecordVideoActiveXPropPage, "RECORDVIDEOACT.RecordVideoActPropPage.1",
	0xce25a82d, 0xd8aa, 0x4c96, 0x8e, 0xc5, 0x6d, 0xf2, 0x96, 0xc, 0x19, 0x46)



// CRecordVideoActiveXPropPage::CRecordVideoActiveXPropPageFactory::UpdateRegistry -
// ��ӻ��Ƴ� CRecordVideoActiveXPropPage ��ϵͳע�����

BOOL CRecordVideoActiveXPropPage::CRecordVideoActiveXPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_RECORDVIDEOACTIVEX_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}



// CRecordVideoActiveXPropPage::CRecordVideoActiveXPropPage - ���캯��

CRecordVideoActiveXPropPage::CRecordVideoActiveXPropPage() :
	COlePropertyPage(IDD, IDS_RECORDVIDEOACTIVEX_PPG_CAPTION)
{
}



// CRecordVideoActiveXPropPage::DoDataExchange - ��ҳ�����Լ��ƶ�����

void CRecordVideoActiveXPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}



// CRecordVideoActiveXPropPage ��Ϣ�������
