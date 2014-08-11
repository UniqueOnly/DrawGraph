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
CString copyRight="绘制三角形 v2.1 By 王云"+hHang+"欢迎提供您宝贵的意见至："+hHang+"Email:289211964@qq.com"+hHang+"QQ:289211964";
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
//	CString copyRight="绘制三角形 v2.0 By 王云"+hHang+"欢迎提供您宝贵的意见至："+hHang+"Email:289211964@qq.com"+hHang+"QQ:289211964";
	huiHua="I.绘画："+hHang+backSpace+backSpace+"1.绘制椭圆；"+hHang+backSpace+backSpace+"2.绘制矩形；"+hHang+backSpace+backSpace+"3.绘制三角形（手绘）；"+hHang+backSpace+backSpace+"3.绘制三角形（坐标绘制）；";
	gongNeng="II.功能："+hHang+backSpace+backSpace+"1.计算三角形（手绘）；"+hHang+backSpace+backSpace+"2.清空画板；";
	shuoMing="III.说明："+hHang+backSpace+backSpace+"1.使用说明；"+hHang+backSpace+backSpace+"2.更新说明；";

	str="选项卡功能说明："+hHang+backSpace+huiHua+hHang+backSpace+gongNeng+hHang+backSpace+shuoMing+hHang+hHang+copyRight;
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
