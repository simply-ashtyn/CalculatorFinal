#pragma once
#include "IBaseCommand.h"
#include "CalculatorProcessor.h"

class DivideCommand : public IBaseCommand
{
private:
	int number = 0;
	int number2 = 0;
	int result = 0;
public:
	std::string Divide(int number, int number2)
	{
		result = number / number2;
		return std::to_string(result);
	}

	std::string Execute()
	{
		return Divide(number, number2);
	}
};

