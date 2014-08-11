#if !defined(AFX_INSTRUCMENTS_H__7779CD59_BE91_4F00_94A0_1339BF557F82__INCLUDED_)
#define AFX_INSTRUCMENTS_H__7779CD59_BE91_4F00_94A0_1339BF557F82__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// instrucments.h : header file
//

extern CString hHang;
extern CString backSpace;
extern CString backSpaceD;
extern CString copyRight;

/////////////////////////////////////////////////////////////////////////////
// instrucments dialog

class instrucments : public CDialog
{
// Construction
public:
	instrucments(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(instrucments)
	enum { IDD = IDD_DIALOG2 };
	CString	m_inStr;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(instrucments)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(instrucments)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INSTRUCMENTS_H__7779CD59_BE91_4F00_94A0_1339BF557F82__INCLUDED_)
