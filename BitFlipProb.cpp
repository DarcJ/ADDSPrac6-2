#include "BitFlipProb.h"
#include "Mutator.h"
#include "Individual.h"

#include <iostream>
#include <string>
#include <ctime>
#include <stdlib.h>

using namespace std;

BitFlipProb::BitFlipProb() {
//initialise a value for p
	srand (time(NULL));
	p = ((double) rand() / (RAND_MAX));
	
}

BitFlipProb::BitFlipProb(double prob){
	prob = p;
}

Individual BitFlipProb::mutate(Individual I, int k) {


//initialises an individual to get mutated 
	string DNAstrand = I.getString(); 
	Individual offspring(DNAstrand);

	for (int i =1; i < offspring.getLength()+1; i++ ) {
		//create a random number 
		double randNum = ((double) rand() / (RAND_MAX));
		if(randNum >= p) {
			offspring.flipBit(i); //flips the elements that are greater than p 
		}
	}

	return offspring; //returns mutated individual
}