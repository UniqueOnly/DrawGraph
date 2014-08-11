// te.h : main header file for the TE application
//

#if !defined(AFX_TE_H__4795B19E_8965_49E9_A4E4_CC60E9591F84__INCLUDED_)
#define AFX_TE_H__4795B19E_8965_49E9_A4E4_CC60E9591F84__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols




/////////////////////////////////////////////////////////////////////////////
// CTeApp:
// See te.cpp for the implementation of this class
//

class CTeApp : public CWinApp
{
public:
	CTeApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTeApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CTeApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TE_H__4795B19E_8965_49E9_A4E4_CC60E9591F84__INCLUDED_)
