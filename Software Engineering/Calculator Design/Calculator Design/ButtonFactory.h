#pragma once
#include "wx/wx.h"

class ButtonFactory
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

	wxButton* buttonPoint;
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
public:
	void CreateButtons();
};

