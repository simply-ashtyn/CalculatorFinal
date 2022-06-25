#pragma once
#include "IBaseCommand.h"
#include "CalculatorProcessor.h"

class DecimalCommand : public IBaseCommand
{
private:
	int number = 0;
	int result = 0;
public:
	DecimalCommand(int number)
	{
		result = number;
	}

	void Execute()
	{
		DecimalCommand(number);
	}
};