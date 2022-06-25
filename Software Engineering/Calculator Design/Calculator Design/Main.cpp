#include "Main.h"
#include "App.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"
#include <iostream>
#include <string>
#include <vector>
#include "IBaseCommand.h"
#include "AddCommand.h"
#include "SubtractCommand.h"
#include "MultiplyCommand.h"
#include "DivideCommand.h"

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

int number = 0;
int number2 = 0;

CalculatorProcessor* processor = CalculatorProcessor::GetInstance();

Main::Main() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(200, 200), wxSize(300, 450))
{
	ButtonFactory factory;
	factory.CreateButtons(this);
	textBox = new wxTextCtrl(this, 122, "", wxPoint(70, 10), wxSize(200, 50));
}

void Main::OnButtonClick(wxCommandEvent& evt)
{
	int id = evt.GetId();
	char delimiter = ' ';

	switch (id)
	{
	case 100: {

		break;
	}
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
		processor->number = (int)textBox;
		textBox->Clear();
		break;
	}
	case 113: {
		processor->number = (int)textBox;
		textBox->Clear();
		break;
	}
	case 114: {
		processor->number = (int)textBox;
		textBox->Clear();
		break;
	}
	case 115: {
		processor->number = (int)textBox;
		textBox->Clear();
		break;
	}
	case 117: { //Mod
		processor->number = (int)textBox;
		textBox->Clear();
		//textBox->AppendText(processor->GetMod());
		break;
	}
	case 118: { //Bin
		processor->number = (int)textBox;
		textBox->Clear();
		textBox->AppendText(processor->GetBinary());
		break;
	}
	case 119: { //Hex
		processor->number = (int)textBox;
		textBox->Clear();
		textBox->AppendText(processor->GetHexadecimal());
		break;
	}
	case 120: { //dec
		processor->number = (int)textBox;
		textBox->Clear();
		textBox->AppendText(processor->GetDecimal());
		break;
	}
	case 121: {
		textBox->Clear();
		break;
	}
	case 116: {
		std::string temp;
		processor->number2 = (int)textBox;
		for (int i = 0; i < processor->commands.size(); i++)
		{
			textBox->AppendText(processor->commands[i]->Execute());
		}
		break;
	}
	}
}