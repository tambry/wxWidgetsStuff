#include "SizingSetRectBug.h"

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

wxBEGIN_EVENT_TABLE(BugFrame, wxFrame)
	EVT_SIZING(BugFrame::sizing)
wxEND_EVENT_TABLE()

BugFrame::BugFrame() : wxFrame(NULL, wxID_ANY, "SizingSetRectBug")
{
	Show();
}

void BugFrame::sizing(wxSizeEvent& event)
{
	event.SetRect(wxSize(256, 256));
	event.Skip();
}