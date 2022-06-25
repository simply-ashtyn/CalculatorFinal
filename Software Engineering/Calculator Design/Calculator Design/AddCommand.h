#pragma once
#include "IBaseCommand.h"
#include "CalculatorProcessor.h"
#include <string>
#include "Main.h"

class AddCommand : public IBaseCommand
{
private:
	int number = 0;
	int number2 = 0;
	int result = 0;
public:
	std::string Add(int number,int number2)
	{
		result = number + number2;
		return std::to_string(result);
	}

	std::string Execute()
	{
		return Add(number, number2);
	}
};

