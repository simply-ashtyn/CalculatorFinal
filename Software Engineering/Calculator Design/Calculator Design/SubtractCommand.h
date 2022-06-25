#pragma once
#include "CalculatorProcessor.h"
#include "IBaseCommand.h"

class SubtractCommand : public IBaseCommand
{
private:
	int number = 0;
	int number2 = 0;
	int result = 0;
public:
	std::string Subtract(int number, int number2)
	{
		result = number - number2;
		return std::to_string(result);
	}

	std::string Execute()
	{
		return Subtract(number, number2);
	}
};

