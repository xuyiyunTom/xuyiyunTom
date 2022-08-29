#include "EfficientTruckloads.h"


int EfficientTruckloads::numTrucks(int numCrates, int loadSize)
{
	if (numCrates < 1)
		return 0;
	if (loadSize < 1)
		return 0;
	if (numCrates <= loadSize)
	{
		return 1;
	}
	else
	{
		int* record = new int[numCrates + 1]{ 0 };
		int num = numTrucksKernel(numCrates, loadSize, record);
		delete[] record;
		return num;
	}
}


int EfficientTruckloads::numTrucksKernel(int numCrates, int loadSize, int* record)
{
	if (numCrates <= loadSize)
	{
		return 1;
	}
	else {
		if (numCrates % 2 == 0)
		{
			numCrates = numCrates / 2;
			if (record[numCrates] == 0)
			{
				record[numCrates] = numTrucksKernel(numCrates, loadSize, record);
			}
			return record[numCrates] + record[numCrates];
		}
		else {
			numCrates = numCrates / 2;
			if (record[numCrates] == 0)
			{
				record[numCrates] = numTrucksKernel(numCrates, loadSize, record);
			}
			if (record[numCrates + 1] == 0)
			{
				record[numCrates + 1] = numTrucksKernel(numCrates + 1, loadSize, record);
			}
			return record[numCrates] + record[numCrates + 1];
		}
	}
}