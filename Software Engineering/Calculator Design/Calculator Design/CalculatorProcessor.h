#pragma once
#include <string>

class CalculatorProcessor
{
	// All operands (+,-,*,/) will need to be implemented inside the CalculatorProcessor.
private:
	static CalculatorProcessor* _processor;
	CalculatorProcessor(){}
public:
	int number = 0;
	int number2 = 0;

	static CalculatorProcessor* GetInstance()
	{
		if (_processor == nullptr)
		{
			_processor = new CalculatorProcessor();
		}
		return _processor;
	}

	CalculatorProcessor(CalculatorProcessor& other) = delete;
	void operator=(const CalculatorProcessor& other) = delete;

	std::string Add()
	{
		float result = number + number2;
		return std::to_string(result);
	}

	std::string Subtract()
	{
		float result = number - number2;
		return std::to_string(result);
	}

	std::string Multiply()
	{
		float result = number * number2;
		return std::to_string(result);
	}

	std::string Divide()
	{
		int result = number / number2;
		return std::to_string(result);
	}

	std::string GetDecimal()
	{
		return std::to_string(number);
	}

	std::string GetHexadecimal()
	{
		std::string results = "";
		int tempNum = number;
		while (tempNum > 0)
		{
			int mod = tempNum % 16;
			if (mod<10)
			{
				results = std::to_string(mod) + results;
			}
			else if (mod == 10)
			{
				results = "A" + results;
			}
			else if (mod == 11)
			{
				results = "B" + results;
			}
			else if (mod == 12)
			{
				results = "C" + results;
			}
			else if (mod == 13)
			{
				results = "D" + results;
			}
			else if (mod == 14)
			{
				results = "E" + results;
			}
			else if (mod == 15)
			{
				results = "F" + results;
			}
			tempNum = tempNum / 16;
		}
		results = "0x" + results;

		return results;
	}

	std::string GetBinary()
	{
		int tempNum = 0;
		std::string results = "";
		for (int i = 0; i < 32; i++)
		{
			if (number % 2 == 0)
			{
				results = "0" + results;
			}
			else
			{
				results = "1" + results;
			}
			tempNum = tempNum / 2;
		}
		return results;
	}

	std::string GetMod()
	{
		std::string results = std::to_string(number % number2);
		return results;
	}
};

