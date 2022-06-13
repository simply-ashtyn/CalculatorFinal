#include "App.h"

wxIMPLEMENT_APP(App); //sets up entry point for app

bool App::OnInit()
{
	window = new Main();
	window->Show();
	return true;
}