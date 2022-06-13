#pragma once
#include "wx/wx.h"
#include "Main.h"

class App : public wxApp
{
private:
	Main* window = nullptr;
public:
	virtual bool OnInit();
};

