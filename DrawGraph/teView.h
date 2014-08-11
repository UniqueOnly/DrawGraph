// teView.h : interface of the CTeView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TEVIEW_H__AF9E9CB6_E3B3_4725_A037_06E3E05D8002__INCLUDED_)
#define AFX_TEVIEW_H__AF9E9CB6_E3B3_4725_A037_06E3E05D8002__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "aaa.h"
#include "alert.h"
#include <iostream>



class CTeView : public CView
{
protected: // create from serialization only
	CTeView();
	DECLARE_DYNCREATE(CTeView)

// Attributes
public:
	CTeDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTeView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTeView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
	virtual void showDrawTran(CPoint point);
	virtual void judgeClose(CPoint point1,CPoint point2,CPoint point3);
/*	virtual void showUpdate();
	virtual void showRestart();*/
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTeView)
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRect();
	afx_msg void OnRound();
	afx_msg void OnTrangleh();
	afx_msg void OnTranglew();
	afx_msg void OnUpdatein();
	afx_msg void OnRestart();
	afx_msg void OnInstr();
	afx_msg void OnCaltranh();
	afx_msg void OnCancelMode();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CPoint poi[3];
	int oper;
	int drawType;
	
};

#ifndef _DEBUG  // debug version in teView.cpp
inline CTeDoc* CTeView::GetDocument()
   { return (CTeDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEVIEW_H__AF9E9CB6_E3B3_4725_A037_06E3E05D8002__INCLUDED_)
