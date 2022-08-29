#ifndef _EFFICIENT_TRUCKLOADS_H
#define _EFFICIENT_TRUCKLOADS_H

class EfficientTruckloads
{

public:
    int numTrucks(int numCrates, int loadSize);

private:
    int numTrucksKernel(int numCrates, int loadSize, int* temp);
};

#endif