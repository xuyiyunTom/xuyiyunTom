#include "Reverse.h"


int Reverse::reverseDigit(int value)
{
	if (value < 0)
		return -1;
	int temp1 = value;
	int temp2 = 1;
	while (temp1 >= 10)
	{
		temp1 = temp1 / 10;
		temp2 = temp2 * 10;
	}
	value = value - temp1 * temp2;
	if (value == 0)
		return temp1;
	else
		return temp1 + reverseDigit(value) * 10;
}


std::string Reverse::reverseString(std::string letters)
{
	if (letters.empty())
		return "";
	std::string temp;
	temp.push_back(letters.back());
	letters.pop_back();
	return temp + reverseString(letters);
}
