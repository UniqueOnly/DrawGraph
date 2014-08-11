// teDoc.cpp : implementation of the CTeDoc class
//

#include "stdafx.h"
#include "te.h"

#include "teDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTeDoc

IMPLEMENT_DYNCREATE(CTeDoc, CDocument)

BEGIN_MESSAGE_MAP(CTeDoc, CDocument)
	//{{AFX_MSG_MAP(CTeDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTeDoc construction/destruction

CTeDoc::CTeDoc()
{
	// TODO: add one-time construction code here

}

CTeDoc::~CTeDoc()
{
}

BOOL CTeDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;
	SetTitle("绘制三角形 v1.2 By 王云");

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




/////////////////////////////////////////////////////////////////////////////
// CTeDoc serialization

void CTeDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CTeDoc diagnostics

#ifdef _DEBUG
void CTeDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTeDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTeDoc commands
