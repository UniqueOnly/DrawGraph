#if !defined(AFX_AAA_H__77E4D4F1_289E_4678_A2DD_4B9E466BE55A__INCLUDED_)
#define AFX_AAA_H__77E4D4F1_289E_4678_A2DD_4B9E466BE55A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// aaa.h : header file
//
#include <math.h>
/////////////////////////////////////////////////////////////////////////////
// aaa dialog



class aaa : public CDialog
{
// Construction
public:
	aaa(CWnd* pParent = NULL);   // standard constructor
	/*aaa(CPoint p1,CPoint p2,CPoint p3);*/

// Dialog Data
	//{{AFX_DATA(aaa)
	enum { IDD = IDD_DIALOG1 };
	CButton	m_handPic;
	CButton	m_Cal;
	int		m_x1;
	int		m_y1;
	int		m_x2;
	int		m_y2;
	int		m_x3;
	int		m_y3;
	CString	m_zChang;
	CString	m_mJi;
	CString	m_Len12;
	CString	m_Len23;
	CString	m_Len31;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(aaa)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(aaa)
	afx_msg void OnButton1();
	afx_msg void OnButton4();
	afx_msg void OnButton3();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_AAA_H__77E4D4F1_289E_4678_A2DD_4B9E466BE55A__INCLUDED_)
