#pragma once

#include "wx/wx.h"

class BugApp : public wxApp
{
public:
	virtual bool OnInit();
};

class BugFrame : protected wxFrame
{
public:
	BugFrame();

private:
	void sizing(wxSizeEvent& event);
};