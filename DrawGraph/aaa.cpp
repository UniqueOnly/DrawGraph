// aaa.cpp : implementation file
//

#include "stdafx.h"
#include "te.h"
#include "aaa.h"
//#include "instrucments.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// aaa dialog


aaa::aaa(CWnd* pParent /*=NULL*/)
	: CDialog(aaa::IDD, pParent)
{
	//{{AFX_DATA_INIT(aaa)
	m_x1 = 0;
	m_y1 = 0;
	m_x2 = 0;
	m_y2 = 0;
	m_x3 = 0;
	m_y3 = 0;
	m_zChang = _T("");
	m_mJi = _T("");
	m_Len12 = _T("");
	m_Len23 = _T("");
	m_Len31 = _T("");
	//}}AFX_DATA_INIT
}

/*aaa::aaa(CPoint p1,CPoint p2,CPoint p3)
{
	m_x1 = p1.x;
	m_y1 = p1.y;
	m_x2 = p2.x;
	m_y2 = p2.y;
	m_x3 = p3.x;
	m_y3 = p3.y;
}*/


void aaa::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(aaa)
	DDX_Control(pDX, IDC_BUTTON1, m_Cal);
	DDX_Text(pDX, IDC_EDIT1, m_x1);
	DDX_Text(pDX, IDC_EDIT2, m_y1);
	DDX_Text(pDX, IDC_EDIT3, m_x2);
	DDX_Text(pDX, IDC_EDIT4, m_y2);
	DDX_Text(pDX, IDC_EDIT5, m_x3);
	DDX_Text(pDX, IDC_EDIT6, m_y3);
	DDX_Text(pDX, IDC_EDIT7, m_zChang);
	DDX_Text(pDX, IDC_EDIT8, m_mJi);
	DDX_Text(pDX, IDC_EDIT9, m_Len12);
	DDX_Text(pDX, IDC_EDIT10, m_Len23);
	DDX_Text(pDX, IDC_EDIT11, m_Len31);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(aaa, CDialog)
	//{{AFX_MSG_MAP(aaa)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// aaa message handlers

void aaa::OnButton1() 
{
	UpdateData(TRUE);
	// TODO: Add your control notification handler code here
	double len12,len23,len31;
	double zhouC,mianJ;
	CString str_z,str_m,str_len12,str_len23,str_len31;
	len12=sqrt((m_x1-m_x2)*(m_x1-m_x2)+(m_y1-m_y2)*(m_y1-m_y2));
	len23=sqrt((m_x2-m_x3)*(m_x2-m_x3)+(m_y2-m_y3)*(m_y2-m_y3));
	len31=sqrt((m_x3-m_x1)*(m_x3-m_x1)+(m_y3-m_y1)*(m_y3-m_y1));
	zhouC=len12+len23+len31;
	mianJ=fabs((m_x2-m_x1)*(m_y2+m_y1)+(m_x3-m_x2)*(m_y3+m_y2)-(m_x3-m_x1)*(m_y3+m_y1))/2;
	
	str_z.Format("%.2f",zhouC);
	m_zChang=str_z;
//	SetDlgItemText(IDC_EDIT7,str_z);
//	m_zChang=zhouC;	
	str_m.Format("%.2f",mianJ);
	m_mJi=str_m;
//	SetDlgItemText(IDC_EDIT8,str_m);
//	m_mJi=mianJ;
	str_len12.Format("%.2f",len12);
	m_Len12=str_len12;
	str_len23.Format("%.2f",len23);
	m_Len23=str_len23;
	str_len31.Format("%.2f",len31);
	m_Len31=str_len31;

	UpdateData(FALSE);
}

/*void aaa::OnButton2() 
{
	// TODO: Add your control notification handler code here
	instrucments dg;
	dg.DoModal();
}*/
