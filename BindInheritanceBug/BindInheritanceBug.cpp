#include "BindInheritanceBug.h"

#ifdef DEBUG
wxIMPLEMENT_APP_CONSOLE(BugApp);
#else
wxIMPLEMENT_APP(BugApp);
#endif

bool BugApp::OnInit()
{
	BugFrame* frame = new BugFrame();
	return true;
}

BugFrame::BugFrame() : wxFrame(NULL, wxID_ANY, "BindInheritanceBug")
{
	Bind(wxEVT_SIZING, &BugFrame::sizing, this);
	Show();
}

void BugFrame::sizing(wxSizeEvent& event)
{
	event.Skip();
}