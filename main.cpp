#include <iostream>
#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"

using namespace std;


int main() {

	bool numBad1 = false, numBad2 = false;
	int a, b, c;
	string letters;
	cin >> a;
	if (!cin.good())
	{
		numBad1 = true;
		cin.clear();
	}
	if (a < 0)
		numBad1 = true;
	cin >> letters >> b;
	if (!cin.good())
	{
		numBad2 = true;
		std::cin.clear();
	}
	cin >> c;
	if (!cin.good())
	{
		numBad2 = true;
		std::cin.clear();
	}
	Reverse reverse;
	if (numBad1)
		std::cout << "ERROR" << " ";
	else
		std::cout << reverse.reverseDigit(a) << " ";
	std::cout << reverse.reverseString(letters) << " ";
	Truckloads truckloads;
	if (numBad2)
		std::cout << "ERROR" << " ";
	else
		std::cout << truckloads.numTrucks(b, c) << " ";
	EfficientTruckloads efficientTruckloads;
	if (numBad2)
		std::cout << "ERROR" << " ";
	else
		std::cout << efficientTruckloads.numTrucks(b, c) << " ";
	return 0;
}