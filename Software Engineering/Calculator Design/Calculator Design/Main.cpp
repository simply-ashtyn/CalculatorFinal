#include "Main.h"

wxBEGIN_EVENT_TABLE(Main,wxFrame)
EVT_BUTTON(100, Main::OnButtonClick)
EVT_BUTTON(101, Main::OnButtonClick)
EVT_BUTTON(102, Main::OnButtonClick)
EVT_BUTTON(103, Main::OnButtonClick)
wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(300, 350))
{
	textBox = new wxTextCtrl(this, 104, "", wxPoint(70,10), wxSize(200,50));
	negative = new wxButton(this, 100, "+/-", wxPoint(10, 10), wxSize(50, 50));

	button7 = new wxButton(this, 101, "7", wxPoint(10, 120), wxSize(50, 50));
	button8 = new wxButton(this, 102, "8", wxPoint(60, 120), wxSize(50, 50));
	button9 = new wxButton(this, 103, "9", wxPoint(110, 120), wxSize(50, 50));
	button4 = new wxButton(this, 104, "4", wxPoint(10, 170), wxSize(50, 50));
	button5 = new wxButton(this, 105, "5", wxPoint(60, 170), wxSize(50, 50));
	button6 = new wxButton(this, 106, "6", wxPoint(110, 170), wxSize(50, 50));
	button1 = new wxButton(this, 107, "1", wxPoint(10, 170), wxSize(50, 50));
	button2 = new wxButton(this, 108, "2", wxPoint(60, 170), wxSize(50, 50));
	button3 = new wxButton(this, 109, "3", wxPoint(110, 170), wxSize(50, 50));
	button0 = new wxButton(this, 110, "0", wxPoint(10, 220), wxSize(100, 50));
	buttonP = new wxButton(this, 110, "0", wxPoint(110, 220), wxSize(50, 50));
}

void Main::OnButtonClick(wxCommandEvent& evt)
{
	int id = evt.GetId();
	//evt.GetEventObject();
	
	//switch (id)
	//{
	//case 101: {
	//	textBox->AppendText("7");
	//	}
	//	break;
	//}
}