// instrucments.cpp : implementation file
//

#include "stdafx.h"
#include "te.h"
#include "instrucments.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

CString hHang="\r\n";
CString backSpace="    ";
CString backSpaceD="        ";
CString copyRight="���������� v2.1 By ����"+hHang+"��ӭ�ṩ��������������"+hHang+"Email:289211964@qq.com"+hHang+"QQ:289211964";
/////////////////////////////////////////////////////////////////////////////
// instrucments dialog


instrucments::instrucments(CWnd* pParent /*=NULL*/)
	: CDialog(instrucments::IDD, pParent)
{
	//{{AFX_DATA_INIT(instrucments)
	CString str;
	CString huiHua;
	CString gongNeng;
	CString shuoMing;
//	CString hHang="\r\n";
//	CString backSpace="    ";
//	CString copyRight="���������� v2.0 By ����"+hHang+"��ӭ�ṩ��������������"+hHang+"Email:289211964@qq.com"+hHang+"QQ:289211964";
	huiHua="I.�滭��"+hHang+backSpace+backSpace+"1.������Բ��"+hHang+backSpace+backSpace+"2.���ƾ��Σ�"+hHang+backSpace+backSpace+"3.���������Σ��ֻ棩��"+hHang+backSpace+backSpace+"3.���������Σ�������ƣ���";
	gongNeng="II.���ܣ�"+hHang+backSpace+backSpace+"1.���������Σ��ֻ棩��"+hHang+backSpace+backSpace+"2.��ջ��壻";
	shuoMing="III.˵����"+hHang+backSpace+backSpace+"1.ʹ��˵����"+hHang+backSpace+backSpace+"2.����˵����";

	str="ѡ�����˵����"+hHang+backSpace+huiHua+hHang+backSpace+gongNeng+hHang+backSpace+shuoMing+hHang+hHang+copyRight;
	m_inStr = _T(str);
	//}}AFX_DATA_INIT
}


void instrucments::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(instrucments)
	DDX_Text(pDX, IDC_EDIT1, m_inStr);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(instrucments, CDialog)
	//{{AFX_MSG_MAP(instrucments)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// instrucments message handlers
