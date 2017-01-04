// RecordVideoActiveXPropPage.cpp : CRecordVideoActiveXPropPage 属性页类的实现。

#include "stdafx.h"
#include "RecordVideoActiveX.h"
#include "RecordVideoActiveXPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CRecordVideoActiveXPropPage, COlePropertyPage)



// 消息映射

BEGIN_MESSAGE_MAP(CRecordVideoActiveXPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(CRecordVideoActiveXPropPage, "RECORDVIDEOACT.RecordVideoActPropPage.1",
	0xce25a82d, 0xd8aa, 0x4c96, 0x8e, 0xc5, 0x6d, 0xf2, 0x96, 0xc, 0x19, 0x46)



// CRecordVideoActiveXPropPage::CRecordVideoActiveXPropPageFactory::UpdateRegistry -
// 添加或移除 CRecordVideoActiveXPropPage 的系统注册表项

BOOL CRecordVideoActiveXPropPage::CRecordVideoActiveXPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_RECORDVIDEOACTIVEX_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}



// CRecordVideoActiveXPropPage::CRecordVideoActiveXPropPage - 构造函数

CRecordVideoActiveXPropPage::CRecordVideoActiveXPropPage() :
	COlePropertyPage(IDD, IDS_RECORDVIDEOACTIVEX_PPG_CAPTION)
{
}



// CRecordVideoActiveXPropPage::DoDataExchange - 在页和属性间移动数据

void CRecordVideoActiveXPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}



// CRecordVideoActiveXPropPage 消息处理程序
