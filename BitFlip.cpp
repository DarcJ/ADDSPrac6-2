#include "BitFlip.h"
#include "Mutator.h"
#include "Individual.h"

#include <iostream>
#include <string>

using namespace std;

Individual BitFlip::mutate(Individual person, int k) {

//this creates an Individual that will be mutated
	string personString = person.getString(); 
	Individual offspring(personString);

	if (k <= offspring.getLength()) {
		offspring.flipBit(k);
	} else if (k > offspring.getLength()) {
		k = k%offspring.getLength(); //makes sure k goes in a circle
		offspring.flipBit(k);
	}

	return offspring; //return the mutate individual
}