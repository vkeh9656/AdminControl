// UserWnd.cpp: 구현 파일
//

#include "pch.h"
#include "AdminControl.h"
#include "UserWnd.h"


// UserWnd

IMPLEMENT_DYNAMIC(UserWnd, CWnd)

UserWnd::UserWnd()
{

}

UserWnd::~UserWnd()
{
}


BEGIN_MESSAGE_MAP(UserWnd, CWnd)
	ON_WM_PAINT()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()



// UserWnd 메시지 처리기
void UserWnd::OnPaint()
{
	CPaintDC dc(this); 

	CRect r;
	GetClientRect(r);
	
	dc.FillSolidRect(r, RGB(0, 0, 255));
}


void UserWnd::OnLButtonDown(UINT nFlags, CPoint point)
{
	CRect r;
	r.SetRect(point.x - 10, point.y - 10, point.x + 10, point.y + 10);
	
	CClientDC dc(this);
	dc.FillSolidRect(r, RGB(255, 0, 0));

	CWnd::OnLButtonDown(nFlags, point);
}
