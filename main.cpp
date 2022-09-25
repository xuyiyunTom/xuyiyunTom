#include <iostream>
#include "Individual.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

Individual* execute(Individual* indPtr, Mutator * mPtr, int k);

int main() {
	int index1, index2;
	string binStr1, binStr2;
	cin >> binStr1 >> index1 >> binStr2 >> index2;
	Individual* src1 = new Individual(binStr1);
	Individual* src2 = new Individual(binStr2);
	Mutator* p1 = new BitFlip;
	Mutator* p2 = new Rearrange;
	Individual* des1 = execute(src1, p1, index1);
	Individual* des2 = execute(src2, p2, index2);
	cout << des1->getString() << " " 
		<< des2->getString() << " " 
		<< des2->getMaxOnes() << endl;
	return 0;
}

Individual* execute(Individual* indPtr, Mutator * mPtr, int k){
    return new Individual(mPtr->mutate(*indPtr, k));
}