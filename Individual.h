#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include <iostream>
#include <string>

class Individual {

private:
	std::string DNA;
public:
	Individual(int length);
	Individual(std::string binaryString);
	std::string getString();
    int getBit(int pos); 
    void flipBit(int pos); 
    int getMaxOnes();
    int getLength();

};

#endif 
//INDIVIDUAL_H
