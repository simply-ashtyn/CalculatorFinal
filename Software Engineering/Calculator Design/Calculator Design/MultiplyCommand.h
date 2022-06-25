#pragma once
#include "IBaseCommand.h"
#include "CalculatorProcessor.h"

class MultiplyCommand : public IBaseCommand
{
private:
	int number = 0;
	int number2 = 0;
	int result = 0;
public:
	std::string Multiply(int number, int number2)
	{
		result = number * number2;
		return std::to_string(result);
	}

	std::string Execute()
	{
		return Multiply(number, number2);
	}
};

