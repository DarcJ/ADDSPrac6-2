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

Individual BitFlipProb::mutate(Individual person, int k) {


//initialises an individual to get mutated 
	string personString = person.getString(); 
	Individual offspring(personString);

	for (int i =1; i < offspring.getLength()+1; i++ ) {
		//create a random number 
		double randNum = ((double) rand() / (RAND_MAX));
		if(randNum >= p) {
			offspring.flipBit(i); //flips the elements that are greater than p 
		}
	}

	return offspring; //returns mutated individual
}