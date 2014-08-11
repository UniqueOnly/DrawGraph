// teView.cpp : implementation of the CTeView class
//

#include "stdafx.h"
#include "te.h"

#include "teDoc.h"
#include "teView.h"
#include "instrucments.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

bool flag=false;
CPoint tmp;
bool fir=false;

/////////////////////////////////////////////////////////////////////////////
// CTeView
//bool count;

IMPLEMENT_DYNCREATE(CTeView, CView)

BEGIN_MESSAGE_MAP(CTeView, CView)
	//{{AFX_MSG_MAP(CTeView)
	ON_WM_LBUTTONUP()
	ON_WM_LBUTTONDOWN()
	ON_COMMAND(ID_RECT, OnRect)
	ON_COMMAND(ID_ROUND, OnRound)
	ON_COMMAND(ID_TRANGLEH, OnTrangleh)
	ON_COMMAND(ID_TRANGLEW, OnTranglew)
	ON_COMMAND(ID_UPDATEIN, OnUpdatein)
	ON_COMMAND(ID_RESTART, OnRestart)
	ON_COMMAND(ID_INSTR, OnInstr)
	ON_COMMAND(ID_CALTRANH, OnCaltranh)
	ON_WM_CANCELMODE()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTeView construction/destruction


CTeView::CTeView()
{
	// TODO: add construction code here
//	SetWindowText("这是一个程序");
	drawType=0;
	oper=0;
	poi[0]=0;
	poi[1]=0;
	poi[2]=0;
}

CTeView::~CTeView()
{
}

BOOL CTeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs
	
	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CTeView drawing

void CTeView::OnDraw(CDC* pDC)
{
	CTeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CTeView printing

BOOL CTeView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CTeView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CTeView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CTeView diagnostics

#ifdef _DEBUG
void CTeView::AssertValid() const
{
	CView::AssertValid();
}

void CTeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTeDoc* CTeView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTeDoc)));
	return (CTeDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTeView message handlers


//DEL void CTeView::OnRButtonDown(UINT nFlags, CPoint point) 
//DEL {
//DEL 	// TODO: Add your message handler code here and/or call default
//DEL 	aaa dlg;
//DEL 
//DEL 	CPoint p1,p2,p3;
//DEL 	if(dlg.DoModal()==IDOK)
//DEL 	{
//DEL 		p1.x=dlg.m_x1; p1.y=dlg.m_y1;
//DEL 		p2.x=dlg.m_x2; p2.y=dlg.m_y2;
//DEL 		p3.x=dlg.m_x3; p3.y=dlg.m_y3;
//DEL 	}
//DEL 	
//DEL 	CClientDC dc(this);
//DEL 	if(count)
//DEL 	{
//DEL 		alert al;
//DEL 		al.DoModal();
//DEL 		if(flag)
//DEL 		{
//DEL 			InvalidateRect(NULL);
//DEL 			UpdateWindow();
//DEL 		}
//DEL 		count=false;
//DEL 	}
//DEL 	dc.MoveTo(p1);
//DEL 	dc.LineTo(p2);
//DEL 	dc.LineTo(p3);
//DEL 	dc.LineTo(p1);
//DEL 	count=true;
//DEL 	
//DEL class Point
//DEL {
//DEL public:
//DEL 	double x;
//DEL 	double y;
//DEL public:
//DEL 	Point()
//DEL 	{
//DEL 		x=0.0;
//DEL 		y=0.0;	
//DEL 	}
//DEL 	Point(double a,double b)
//DEL 	{
//DEL 		x=a;
//DEL 		y=b;
//DEL 	}
//DEL };
//DEL 
//DEL class Trangle
//DEL {
//DEL private:
//DEL 	Point p1,p2,p3;
//DEL 	double tArea,tZhou; 
//DEL public:
//DEL 	double len12,len23,len31;
//DEL 	Trangle(Point a,Point b,Point c)
//DEL 	{
//DEL 		p1=a;
//DEL 		p2=b;
//DEL 		p3=c;
//DEL 	}
//DEL 	void calBian()
//DEL 	{
//DEL 		len12=sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
//DEL 		len23=sqrt((p2.x-p3.x)*(p2.x-p3.x)+(p2.y-p3.y)*(p2.y-p3.y));
//DEL 		len31=sqrt((p3.x-p1.x)*(p3.x-p1.x)+(p3.y-p1.y)*(p3.y-p1.y));
//DEL 		//cout<<"三边长分别为："<<len12<<','<<len23<<','<<len31<<endl;
//DEL 	}
//DEL /*	void outBian()
//DEL 	{
//DEL 		CString str;
//DEL 		str= "三边长分别为："+(CString)(len12+'0')+','+(CString)(len23+'0')+','+(CString)(len31+'0');
//DEL 		MessageBoxA(NULL,str,"提示",MB_OK);
//DEL 	}*/
//DEL /*	void calZhouCh()
//DEL 	{
//DEL 		tZhou=len12+len23+len31;
//DEL 		MessageBox(NULL,,"提示","MB_OK");
//DEL 	}*/
//DEL /*	void calArea()
//DEL 	{
//DEL 		tArea=fabs((p2.x-p1.x)*(p2.y+p1.y)+(p3.x-p2.x)*(p3.y+p2.y)-(p3.x-p1.x)*(p3.y+p1.y))/2;
//DEL 		MessageBox("面积为："+tArea);
//DEL 	} */
//DEL 	void judgeType()
//DEL 	{
//DEL 		if((len12==len23)||(len12==len23)||(len23==len31))
//DEL 		{
//DEL 			if((len12==len23)&&(len12==len31))
//DEL 			{
//DEL 				MessageBoxA(NULL,"这是一个等边三角形","提示",MB_OK);
//DEL 			}
//DEL 			else
//DEL 			{
//DEL 				if((len12*len12+len23*len23==len31*len31)||(len12*len12+len31*len31==len23*len23)||(len23*len23+len31*len31==len12*len12))
//DEL 				{
//DEL 					MessageBoxA(NULL,"这是一个等腰直角三角形","提示",MB_OK);
//DEL 				}
//DEL 				else
//DEL 				{
//DEL 					MessageBoxA(NULL,"这是一个等腰三角形","提示",MB_OK);
//DEL 				}
//DEL 			}
//DEL 		}
//DEL 		else
//DEL 		{
//DEL 			if((len12*len12+len23*len23==len31*len31)||(len12*len12+len31*len31==len23*len23)||(len23*len23+len31*len31==len12*len12))
//DEL 			{
//DEL 				MessageBoxA(NULL,"这是一个直角三角形","提示",MB_OK);
//DEL 			}
//DEL 			else if((len12*len12+len23*len23<len31*len31)||(len12*len12+len31*len31<len23*len23)||(len23*len23+len31*len31<len12*len12))   //判断三角形中若存在一个角大于90，则必定为钝角三角形，反之，必定为锐角三角形
//DEL 			{
//DEL 				MessageBoxA(NULL,"这是一个钝角三角形","提示",MB_OK);
//DEL 			}
//DEL 			else
//DEL 			{
//DEL 				MessageBoxA(NULL,"这是一个锐角三角形","提示",MB_OK);
//DEL 			}
//DEL 		}
//DEL 	}
//DEL };
//DEL 		Point point1(p1.x,p1.y);
//DEL 		Point point2(p2.x,p2.y);
//DEL 		Point point3(p3.x,p3.y);
//DEL 		Trangle trangle(point1,point2,point3);
//DEL 		trangle.calBian();
//DEL 		try
//DEL 		{
//DEL 			if(trangle.len12==0||trangle.len23==0||trangle.len31==0) throw trangle.len12;
//DEL 			else 
//DEL 			{
//DEL 				if((trangle.len12+trangle.len23<=trangle.len31)||(trangle.len12+trangle.len31<=trangle.len23)||(trangle.len23+trangle.len31<=trangle.len12)) throw trangle.len12;
//DEL 				else
//DEL 				{
//DEL 					trangle.judgeType();
//DEL //					trangle.outBian();
//DEL 					//trangle.calBian();
//DEL 				//	trangle.calZhouCh();
//DEL 				//	trangle.calArea();	
//DEL 				}
//DEL 			}
//DEL 		}
//DEL 		catch (double)
//DEL 		{
//DEL 			MessageBox("不能构成三角形");
//DEL 		}
//DEL 
//DEL 
//DEL 
//DEL 
//DEL 	CView::OnRButtonDown(nFlags, point);
//DEL }



//DEL void CTeView::OnMouseMove(UINT nFlags, CPoint point) 
//DEL {
//DEL 	// TODO: Add your message handler code here and/or call default
//DEL 	CPoint pre;
//DEL 	if(oper<2)
//DEL 	{
//DEL 		pre.x=dian[oper].x;
//DEL 		pre.y=dian[oper].y;
//DEL 		setDraw(pre,point);
//DEL 	}
//DEL 	CView::OnMouseMove(nFlags, point);
//DEL }

class Point
{
public:
	double x;
 	double y;
public:
 	Point()
 	{
 		x=0.0;
 		y=0.0;	
 	}
 	Point(double a,double b)
 	{
 		x=a;
 		y=b;
 	}
};

class Trangle
{
private:
	Point p1,p2,p3;
	double tArea,tZhou; 
public:
	double len12,len23,len31;
	Trangle(Point a,Point b,Point c)
	{
 		p1=a;
 		p2=b;
 		p3=c;
 	}
 	void calBian()
 	{
 		len12=sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
 		len23=sqrt((p2.x-p3.x)*(p2.x-p3.x)+(p2.y-p3.y)*(p2.y-p3.y));
 		len31=sqrt((p3.x-p1.x)*(p3.x-p1.x)+(p3.y-p1.y)*(p3.y-p1.y));
 		//cout<<"三边长分别为："<<len12<<','<<len23<<','<<len31<<endl;
 	}
 	void judgeType()
 	{
 		if((len12==len23)||(len12==len23)||(len23==len31))
 		{
 			if((len12==len23)&&(len12==len31))
 			{
 				MessageBoxA(NULL,"这是一个等边三角形","提示",MB_OK);
 			}
 			else
 			{
 				if((len12*len12+len23*len23==len31*len31)||(len12*len12+len31*len31==len23*len23)||(len23*len23+len31*len31==len12*len12))
 				{
 					MessageBoxA(NULL,"这是一个等腰直角三角形","提示",MB_OK);
 				}
 				else
 				{
 					MessageBoxA(NULL,"这是一个等腰三角形","提示",MB_OK);
 				}
 			}
 		}
 		else
 		{
 			if((len12*len12+len23*len23==len31*len31)||(len12*len12+len31*len31==len23*len23)||(len23*len23+len31*len31==len12*len12))
 			{
 				MessageBoxA(NULL,"这是一个直角三角形","提示",MB_OK);
 			}
 			else if((len12*len12+len23*len23<len31*len31)||(len12*len12+len31*len31<len23*len23)||(len23*len23+len31*len31<len12*len12))   //判断三角形中若存在一个角大于90，则必定为钝角三角形，反之，必定为锐角三角形
 			{
 				MessageBoxA(NULL,"这是一个钝角三角形","提示",MB_OK);
 			}
 			else
 			{
 				MessageBoxA(NULL,"这是一个锐角三角形","提示",MB_OK);
 			}
 		}
 	}
 };


void CTeView::OnRect() 
{
	// TODO: Add your command handler code here
	drawType=2;
}

void CTeView::OnRound() 
{
	// TODO: Add your command handler code here
	drawType=1;
}

void CTeView::OnTrangleh() 
{
	// TODO: Add your command handler code here
	drawType=3;
}

void CTeView::OnTranglew() 
{
	// TODO: Add your command handler code here
	aaa dlg;
	CPoint p1,p2,p3;
	if(dlg.DoModal()==IDOK)
	{
		p1.x=dlg.m_x1; p1.y=dlg.m_y1;
		p2.x=dlg.m_x2; p2.y=dlg.m_y2;
		p3.x=dlg.m_x3; p3.y=dlg.m_y3;
	}
	
	CClientDC dc(this);
	dc.MoveTo(p1);
	dc.LineTo(p2);
	dc.LineTo(p3);
	dc.LineTo(p1);
	Point point1(p1.x,p1.y);
	Point point2(p2.x,p2.y);
	Point point3(p3.x,p3.y);
	Trangle trangle(point1,point2,point3);
	trangle.calBian();
	try
	{
		if(trangle.len12==0||trangle.len23==0||trangle.len31==0) throw trangle.len12;
		else 
		{
			if((trangle.len12+trangle.len23<=trangle.len31)||(trangle.len12+trangle.len31<=trangle.len23)||(trangle.len23+trangle.len31<=trangle.len12)) throw trangle.len12;
			else
			{
				trangle.judgeType();
				//				trangle.outBian();
				//trangle.calBian();
				//	trangle.calZhouCh();
				//	trangle.calArea();	
			}
		}
	}
	catch (double)
	{
		MessageBox("不能构成三角形");
	}
}

void CTeView::OnCaltranh() 
{
	// TODO: Add your command handler code here
	
	if(!flag)
	{
		MessageBox("您还没画完三角形！");
	}
	else
	{
		aaa dlg;
		dlg.m_x1=poi[0].x;	dlg.m_y1=poi[0].y;
		dlg.m_x2=poi[1].x;	dlg.m_y2=poi[1].y;
		dlg.m_x3=poi[2].x;	dlg.m_y3=poi[2].y;
		dlg.DoModal();//DoModal必须在赋值之后。否则对话框依旧采用缺省构造器的初始值。
		Point point1(poi[0].x,poi[0].y);
		Point point2(poi[1].x,poi[1].y);
		Point point3(poi[2].x,poi[2].y);
		Trangle trangle(point1,point2,point3);
		trangle.calBian();
		trangle.judgeType();
		
		flag=false;
	}
	
}


void CTeView::OnRestart() 
{
	// TODO: Add your command handler code here
	InvalidateRect(NULL);
 	UpdateWindow();
}

void CTeView::OnInstr() 
{
	// TODO: Add your command handler code here
	instrucments dg;
	dg.DoModal();
}

void CTeView::OnUpdatein() 
{
	// TODO: Add your command handler code here
	alert al;
	al.DoModal();
}

void CTeView::judgeClose(CPoint point1,CPoint point2,CPoint point3)
{
	double n1,n2;
	n1=sqrt((point1.x-point2.x)*(point1.x-point2.x)+(point1.y-point2.y)*(point1.y-point2.y));
	n2=sqrt((point1.x-point3.x)*(point1.x-point3.x)+(point1.y-point3.y)*(point1.y-point3.y));
	if(n1>n2)
	{
		tmp=point3;
	}
	else
	{
		tmp=point2;
	}

}

void CTeView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	switch(oper)
	{
	case 0:poi[0]=point;oper++;break;
	case 2:judgeClose(point,poi[0],poi[1]);break;
	case 3:if(tmp==poi[0]){judgeClose(point,poi[1],poi[2]);fir=true;}else{judgeClose(point,poi[0],poi[2]);fir=false;}break;
	}
}

void CTeView::showDrawTran(CPoint point)
{
	CClientDC dc(this);
	switch(oper)
	{	
		case 1:oper++;poi[1]=point;dc.MoveTo(poi[0]);dc.LineTo(poi[1]);break;
		case 2:oper++;poi[2]=point;if(tmp==poi[0]){dc.MoveTo(tmp);}else{dc.MoveTo(poi[1]);}dc.LineTo(poi[2]);break;
		case 3:oper=0;dc.MoveTo(tmp);if(tmp==poi[2]){if(fir){dc.LineTo(poi[1]);}else{dc.LineTo(poi[0]);}}else{dc.LineTo(poi[2]);}flag=true;break;
	}
}
/*void CTeView::showUpdate()
{
	instrucments dg;
	dg.DoModal();
}

void CTeView::showRestart()
{
 	InvalidateRect(NULL);
 	UpdateWindow();
}*/

void CTeView::OnLButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CClientDC dc(this);
	switch(drawType)
	{
		case 1:dc.Ellipse(CRect(poi[0],point));oper=0;break;
		case 2:dc.Rectangle(CRect(poi[0],point));oper=0;break;
		case 3:showDrawTran(point);break;
	/*	case 5:showRestart();break;
		case 6:showUpdate();oper=0;break;
		case 7:break;*/
	}
	
	CView::OnLButtonUp(nFlags, point);
}




void CTeView::OnCancelMode() 
{
	CView::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}
