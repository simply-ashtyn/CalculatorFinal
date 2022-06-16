#include "ButtonFactory.h"

void ButtonFactory::CreateButtons()
{
	button1 = new wxButton(this, 107, "1", wxPoint(30, 250), wxSize(50, 50));
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
	buttonPoint = new wxButton(this, 111, ".", wxPoint(130, 300), wxSize(50, 50));
	add = new wxButton(this, 112, "+", wxPoint(200, 130), wxSize(50, 50));
	sub = new wxButton(this, 113, "-", wxPoint(200, 180), wxSize(50, 50));
	mult = new wxButton(this, 114, "*", wxPoint(200, 230), wxSize(50, 50));
	divide = new wxButton(this, 115, "/", wxPoint(200, 280), wxSize(50, 50));
	equal = new wxButton(this, 116, "=", wxPoint(200, 330), wxSize(50, 50));
}

