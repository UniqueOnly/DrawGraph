#if !defined(AFX_ALERT_H__4087217A_4D90_48F1_A525_6CEC9CB6F41C__INCLUDED_)
#define AFX_ALERT_H__4087217A_4D90_48F1_A525_6CEC9CB6F41C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// alert.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// alert dialog


class alert : public CDialog
{
// Construction
public:
	alert(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(alert)
	enum { IDD = IDD_DIALOG3 };
	CString	m_inUpdate;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(alert)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(alert)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ALERT_H__4087217A_4D90_48F1_A525_6CEC9CB6F41C__INCLUDED_)
