#include "Individual.h"

Individual::Individual(int len){
	for (int i = 0; i < len; i++) {
		binStr.push_back('0');
	}
}

Individual::Individual(string s){
    binStr = s;
}

string Individual::getString(){
    return binStr;
}

int Individual::getBit(int pos){
	int length = getLength();
	if (pos < 0 || pos > length - 1)
		return -1;
	return (binStr[pos] - '0');
}

void Individual::flipBit(int pos){
	int length = getLength();
    if(pos >= 0 && pos <= length - 1){
        if(binStr[pos] == '1')
            binStr[pos] = '0';
        else 
            binStr[pos] = '1';
    }
}

int Individual::getMaxOnes(){
    int maxOnes = 0;
	int length = getLength();
	for (int i = 0; i < length; i++) {
		if (binStr[i] == '1') {
			int j = 0;
			for (; binStr[i] == '1' && i <= length - 1;) {
				j++;
				i++;
			}
			if (maxOnes < j)
				maxOnes = j;
		}
	}
    return maxOnes;
}

int Individual::getLength(){
    return binStr.size();
}