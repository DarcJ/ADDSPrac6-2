#include "Rearrange.h"
#include "Mutator.h"
#include "Individual.h"

#include <iostream>
#include <string>

using namespace std;

Individual Rearrange::mutate(Individual person, int k) {
//initialises an individual to get mutated 
	string personString;
	personString = person.getString(); 
	string front;
	string back;
	string combinedString;

	if (k > personString.length()) {
		k = k%personString.length();
	}

	if (k == personString.length()) {
		char tail = personString.back();
		personString.pop_back();
		combinedString = tail + personString;
	}

	if (k == 0) {
		combinedString = personString;
	}
 

	if (k > 0 && k < personString.length()) {
		
		for (int i = 0; i < k-1; i++) {
			char a = personString.at(i);
			front.push_back(a);
		}

		for (int i = k-1; i < personString.length(); i++) {
			char a = personString.at(i);
			back.push_back(a);
		}

		combinedString = back + front;
	}


	Individual offspring(combinedString);
	
	return offspring;
}