// teDoc.h : interface of the CTeDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TEDOC_H__D7F8615A_A9E5_4163_A7A2_60907F5D934E__INCLUDED_)
#define AFX_TEDOC_H__D7F8615A_A9E5_4163_A7A2_60907F5D934E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTeDoc : public CDocument
{
protected: // create from serialization only
	CTeDoc();
	DECLARE_DYNCREATE(CTeDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTeDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTeDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
	
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTeDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEDOC_H__D7F8615A_A9E5_4163_A7A2_60907F5D934E__INCLUDED_)
