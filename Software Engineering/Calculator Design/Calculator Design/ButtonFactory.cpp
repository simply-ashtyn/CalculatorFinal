#include "ButtonFactory.h"

void ButtonFactory::CreateButtons(wxWindow* callingWindow)
{
	button1 = new wxButton(callingWindow, 107, "1", wxPoint(30, 250), wxSize(50, 50));
	negative = new wxButton(callingWindow, 100, "+/-", wxPoint(10, 10), wxSize(50, 50));

	mod = new wxButton(callingWindow, 117, "MOD", wxPoint(10, 70), wxSize(50, 50));
	bin = new wxButton(callingWindow, 118, "BIN", wxPoint(60, 70), wxSize(50, 50));
	hex = new wxButton(callingWindow, 119, "HEX", wxPoint(110, 70), wxSize(50, 50));
	dec = new wxButton(callingWindow, 120, "DEC", wxPoint(160, 70), wxSize(50, 50));
	clear = new wxButton(callingWindow, 121, "C", wxPoint(220, 70), wxSize(50, 50));

	button7 = new wxButton(callingWindow, 101, "7", wxPoint(30, 150), wxSize(50, 50));
	button8 = new wxButton(callingWindow, 102, "8", wxPoint(80, 150), wxSize(50, 50));
	button9 = new wxButton(callingWindow, 103, "9", wxPoint(130, 150), wxSize(50, 50));
	button4 = new wxButton(callingWindow, 104, "4", wxPoint(30, 200), wxSize(50, 50));
	button5 = new wxButton(callingWindow, 105, "5", wxPoint(80, 200), wxSize(50, 50));
	button6 = new wxButton(callingWindow, 106, "6", wxPoint(130, 200), wxSize(50, 50));
	button1 = new wxButton(callingWindow, 107, "1", wxPoint(30, 250), wxSize(50, 50));
	button2 = new wxButton(callingWindow, 108, "2", wxPoint(80, 250), wxSize(50, 50));
	button3 = new wxButton(callingWindow, 109, "3", wxPoint(130, 250), wxSize(50, 50));
	button0 = new wxButton(callingWindow, 110, "0", wxPoint(30, 300), wxSize(100, 50));
	buttonPoint = new wxButton(callingWindow, 111, ".", wxPoint(130, 300), wxSize(50, 50));
	add = new wxButton(callingWindow, 112, "+", wxPoint(200, 130), wxSize(50, 50));
	sub = new wxButton(callingWindow, 113, "-", wxPoint(200, 180), wxSize(50, 50));
	mult = new wxButton(callingWindow, 114, "*", wxPoint(200, 230), wxSize(50, 50));
	divide = new wxButton(callingWindow, 115, "/", wxPoint(200, 280), wxSize(50, 50));
	equal = new wxButton(callingWindow, 116, "=", wxPoint(200, 330), wxSize(50, 50));
}

