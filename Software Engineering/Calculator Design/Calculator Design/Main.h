#pragma once
#include "wx/wx.h"

class Main : public wxFrame
{
private:
	wxTextCtrl* textBox;
public:
	Main();
	wxDECLARE_EVENT_TABLE();
	void OnButtonClick(wxCommandEvent& evt);
};

