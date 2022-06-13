#pragma once
#include "wx/wx.h"

class Main : public wxFrame
{
private:
	wxButton* button0;
	wxButton* button1;
	wxButton* button2;
	wxButton* button3;
	wxButton* button4;
	wxButton* button5;
	wxButton* button6;
	wxButton* button7;
	wxButton* button8;
	wxButton* button9;

	wxButton* buttonP;
	wxButton* negative;
	wxButton* add;
	wxButton* sub;
	wxButton* mult;
	wxButton* divide;
	wxButton* equal;

	wxButton* mod;
	wxButton* bin;
	wxButton* hex;
	wxButton* dec;
	wxButton* clear;

	wxTextCtrl* textBox;
public:
	Main();
	wxDECLARE_EVENT_TABLE();
	void OnButtonClick(wxCommandEvent& evt);
};

