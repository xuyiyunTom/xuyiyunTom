#include "Truckloads.h"


int Truckloads::numTrucks(int numCrates, int loadSize)
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
		if (numCrates % 2 == 0)
		{
			numCrates = numCrates / 2;
			int n = numTrucks(numCrates, loadSize);
			return n + n;
		}
		else
		{
			numCrates = numCrates / 2;
			int n = numTrucks(numCrates, loadSize);
			int m = numTrucks(numCrates + 1, loadSize);
			return n + m;
		}
	}
}