#include "Individual.h"
#include "Mutator.h"

#include <iostream>
#include <string>

using namespace std;

Mutator::Mutator() {

}

Individual Mutator::mutate(Individual person, int k) {
	return person;
}

Mutator::~Mutator() {

}