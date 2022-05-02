#include "Individual.h"

#include <iostream>
#include <string>

using namespace std;

Individual::Individual(int length){
//sets all the values in DNA to zeros 
	for (int i =0; i < length; i++) {
		binaryString.push_back('0');
	}
}

Individual::Individual(std::string bString) {
//copies te string 
	binaryString = bString;
}

string Individual::getString() {
//returns the DNA string 
	return binaryString;
}

int Individual::getBit(int pos) {
//gets the bit on a specified position in DNA
	if (pos > binaryString.length()) {
		return -1;
	} else {
		return binaryString.at(pos-1) - '0';
	}
}

void Individual::flipBit(int pos) {
//flips the bit on a specified position in DNA
	if (pos == 0) {
		pos = binaryString.length();
	}

	if (pos <= binaryString.length()) {
		switch(binaryString.at(pos-1)) {
			case '0':
				binaryString.at(pos-1) = '1';
				break;
			case '1':
				binaryString.at(pos-1) = '0';
				break;
		}
	}
}
   
int Individual::getMaxOnes() {
//gets the maximum sequence of ones 

	int maxOnes = 0; //records the max sequence of ones 

	for (int i = 0; i < DNA.length(); i++) {

		if (DNA.at(i) == '1') {
			int tempCount = 1;

			if (i < DNA.length()-1) {
				int j = i + 1;
					while (j < DNA.length() && DNA.at(j) == '1') {
						tempCount++;
						j++;
						i++;
					}	
			}

			if (tempCount > maxOnes) {
			maxOnes = tempCount;
			}
		}
	}

	return maxOnes; 
    
}

int Individual::getLength() {
//returns the length of DNA
	return DNA.length();
}