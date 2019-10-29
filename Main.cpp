#include<afxwin.h>


class CMainFrame :public CFrameWnd {
public:
	CMainFrame() { Create(NULL, L"Hi"); }
	DECLARE_MESSAGE_MAP()
	afx_msg void OnPaint();
};
class CMyApp :public CWinApp {
	BOOL InitInstance() {
		CMainFrame* Frm = new CMainFrame();
		m_pMainWnd = Frm;
		Frm->ShowWindow(1);

		return 1;
	}

};
CMyApp theApp; BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
ON_WM_PAINT()
END_MESSAGE_MAP()

#include<atlimage.h>
void CMainFrame::OnPaint()
{
	CImage img;
	CPaintDC dc(this); 
	img.Load(L"parrot.png");
	img.Draw(dc, 0, 0);
	//dc.Rectangle(0, 0, 250, 250);
}
