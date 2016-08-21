#pragma once

#include "wx/wx.h"

class BugApp : public wxApp
{
public:
	virtual bool OnInit();
};

class BugFrame : public wxFrame
{
public:
	BugFrame();

private:
	void sizing(wxSizeEvent& event);

	wxDECLARE_EVENT_TABLE();
};