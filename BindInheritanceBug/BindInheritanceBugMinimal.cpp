#include "wx/wx.h"

class BugFrame : public wxFrame
{
public:
	BugFrame();

private:
	void sizing(wxSizeEvent& event);
};

BugFrame::BugFrame() : wxFrame(NULL, wxID_ANY, "BindInheritanceBugMinimal")
{
	Bind(wxEVT_SIZING, &BugFrame::sizing, this);
	Show();
}

void BugFrame::sizing(wxSizeEvent& event)
{
	event.Skip();
}

class BugApp : public wxApp
{
public:
	virtual bool OnInit();
};

wxIMPLEMENT_APP(BugApp);

bool BugApp::OnInit()
{
	BugFrame* frame = new BugFrame();
	return true;
}