// alert.cpp : implementation file
//

#include "stdafx.h"
#include "te.h"
#include "alert.h"
#include "instrucments.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


//bool flag;
/////////////////////////////////////////////////////////////////////////////
// alert dialog


alert::alert(CWnd* pParent /*=NULL*/)
	: CDialog(alert::IDD, pParent)
{
	//{{AFX_DATA_INIT(alert)
	CString str;
	CString update;
//	CString hHang="\r\n";
//	CString backSpace="        ";
//	CString copyRight="���������� v2.0 By ����"+hHang+"��ӭ�ṩ��������������"+hHang+"Email:289211964@qq.com"+hHang+"QQ:289211964";
	update="1.ȥ���û��������Ҽ���Ӧ��"+hHang+backSpaceD+"2.����Ϊѡ�ѡ���ܣ�"+hHang+backSpaceD+"3.�ɵ�һ������������������ֻ������Σ�"+hHang+backSpaceD+"4.�Ľ��ֻ������Σ�ʹ֮����������߼���"+hHang+backSpaceD+"5.���ӻ�����Բ�;��Σ�"+hHang+backSpaceD+"6.�ػ����ܸ���ѡ��������û����飻"+hHang+backSpaceD+"7.���Ӹ���˵����"+hHang+backSpaceD+"8.����ʹ��˵����ѡ���";
	str="����˵����"+hHang+backSpaceD+update+hHang+hHang+copyRight;
	m_inUpdate = _T(str);
	//}}AFX_DATA_INI
}


void alert::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(alert)
	DDX_Text(pDX, IDC_EDIT2, m_inUpdate);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(alert, CDialog)
	//{{AFX_MSG_MAP(alert)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// alert message handlers

//DEL BOOL alert::OnInitDialog() 
//DEL {
//DEL 	CDialog::OnInitDialog();
//DEL 	CFont font;
//DEL 	font.CreatePointFont(140,"����");
//DEL 	CEdit*pEdt=(CEdit*)GetDlgItem(IDC_EDIT2);
//DEL 	pEdt->SetFont(&font);
//DEL 	
//DEL 	// TODO: Add extra initialization here
//DEL 	
//DEL 	return TRUE;  // return TRUE unless you set the focus to a control
//DEL 	              // EXCEPTION: OCX Property Pages should return FALSE
//DEL }
