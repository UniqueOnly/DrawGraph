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
//	CString copyRight="绘制三角形 v2.0 By 王云"+hHang+"欢迎提供您宝贵的意见至："+hHang+"Email:289211964@qq.com"+hHang+"QQ:289211964";
	update="1.去除用户体验差的右键响应；"+hHang+backSpaceD+"2.更改为选项卡选择功能；"+hHang+backSpaceD+"3.由单一坐标绘制三角形增加手绘三角形；"+hHang+backSpaceD+"4.改进手绘三角形，使之成像更符合逻辑；"+hHang+backSpaceD+"5.增加绘制椭圆和矩形；"+hHang+backSpaceD+"6.重画功能改至选项卡，提升用户体验；"+hHang+backSpaceD+"7.增加更新说明；"+hHang+backSpaceD+"8.更改使用说明至选项卡。";
	str="更新说明："+hHang+backSpaceD+update+hHang+hHang+copyRight;
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
//DEL 	font.CreatePointFont(140,"宋体");
//DEL 	CEdit*pEdt=(CEdit*)GetDlgItem(IDC_EDIT2);
//DEL 	pEdt->SetFont(&font);
//DEL 	
//DEL 	// TODO: Add extra initialization here
//DEL 	
//DEL 	return TRUE;  // return TRUE unless you set the focus to a control
//DEL 	              // EXCEPTION: OCX Property Pages should return FALSE
//DEL }
