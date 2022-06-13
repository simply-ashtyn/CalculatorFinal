#include "Main.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)
EVT_BUTTON(100, Main::OnButtonClick)
EVT_BUTTON(101, Main::OnButtonClick)
EVT_BUTTON(102, Main::OnButtonClick)
EVT_BUTTON(103, Main::OnButtonClick)
EVT_BUTTON(104, Main::OnButtonClick)
EVT_BUTTON(105, Main::OnButtonClick)
EVT_BUTTON(106, Main::OnButtonClick)
EVT_BUTTON(107, Main::OnButtonClick)
EVT_BUTTON(108, Main::OnButtonClick)
EVT_BUTTON(109, Main::OnButtonClick)
EVT_BUTTON(110, Main::OnButtonClick)
EVT_BUTTON(111, Main::OnButtonClick)
EVT_BUTTON(112, Main::OnButtonClick)
EVT_BUTTON(113, Main::OnButtonClick)
EVT_BUTTON(114, Main::OnButtonClick)
EVT_BUTTON(115, Main::OnButtonClick)
EVT_BUTTON(116, Main::OnButtonClick)
EVT_BUTTON(121, Main::OnButtonClick)
wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(300, 450))
{
	textBox = new wxTextCtrl(this, 122, "", wxPoint(70, 10), wxSize(200, 50));
	negative = new wxButton(this, 100, "+/-", wxPoint(10, 10), wxSize(50, 50));

	mod = new wxButton(this, 117, "MOD", wxPoint(10, 70), wxSize(50, 50));
	bin = new wxButton(this, 118, "BIN", wxPoint(60, 70), wxSize(50, 50));
	hex = new wxButton(this, 119, "HEX", wxPoint(110, 70), wxSize(50, 50));
	dec = new wxButton(this, 120, "DEC", wxPoint(160, 70), wxSize(50, 50));
	clear = new wxButton(this, 121, "C", wxPoint(220, 70), wxSize(50, 50));

	button7 = new wxButton(this, 101, "7", wxPoint(30, 150), wxSize(50, 50));
	button8 = new wxButton(this, 102, "8", wxPoint(80, 150), wxSize(50, 50));
	button9 = new wxButton(this, 103, "9", wxPoint(130, 150), wxSize(50, 50));
	button4 = new wxButton(this, 104, "4", wxPoint(30, 200), wxSize(50, 50));
	button5 = new wxButton(this, 105, "5", wxPoint(80, 200), wxSize(50, 50));
	button6 = new wxButton(this, 106, "6", wxPoint(130, 200), wxSize(50, 50));
	button1 = new wxButton(this, 107, "1", wxPoint(30, 250), wxSize(50, 50));
	button2 = new wxButton(this, 108, "2", wxPoint(80, 250), wxSize(50, 50));
	button3 = new wxButton(this, 109, "3", wxPoint(130, 250), wxSize(50, 50));
	button0 = new wxButton(this, 110, "0", wxPoint(30, 300), wxSize(100, 50));
	buttonP = new wxButton(this, 111, ".", wxPoint(130, 300), wxSize(50, 50));
	add = new wxButton(this, 112, "+", wxPoint(200, 130), wxSize(50, 50));
	sub = new wxButton(this, 113, "-", wxPoint(200, 180), wxSize(50, 50));
	mult = new wxButton(this, 114, "*", wxPoint(200, 230), wxSize(50, 50));
	divide = new wxButton(this, 115, "/", wxPoint(200, 280), wxSize(50, 50));
	equal = new wxButton(this, 116, "=", wxPoint(200, 330), wxSize(50, 50));
}

void Main::OnButtonClick(wxCommandEvent& evt)
{
	int id = evt.GetId();
	//evt.GetEventObject();

	switch (id)
	{
	case 101: {
		textBox->AppendText("7");
		break;
	}
	case 102: {
		textBox->AppendText("8");
		break;
	}
	case 103: {
		textBox->AppendText("9");
		break;
	}
	case 104: {
		textBox->AppendText("4");
		break;
	}
	case 105: {
		textBox->AppendText("5");
		break;
	}
	case 106: {
		textBox->AppendText("6");
		break;
	}
	case 107: {
		textBox->AppendText("1");
		break;
	}
	case 108: {
		textBox->AppendText("2");
		break;
	}
	case 109: {
		textBox->AppendText("3");
		break;
	}
	case 110: {
		textBox->AppendText("0");
		break;
	}
	case 111: {
		textBox->AppendText(".");
		break;
	}
	case 112: {
		textBox->AppendText("+");
		break;
	}
	case 113: {
		textBox->AppendText("-");
		break;
	}
	case 114: {
		textBox->AppendText("*");
		break;
	}
	case 115: {
		textBox->AppendText("/");
		break;
	}
	case 116: {
		textBox->AppendText("=");
		break;
	}
	case 121: {
		textBox->Clear();
		break;
	}
	}
}