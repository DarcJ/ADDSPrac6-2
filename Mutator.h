#include "Individual.h"

#ifndef MUTATOR_H
#define MUTATOR_H

#include <iostream>
#include <string>

class Mutator {

private:

public:
	Mutator();
	virtual Individual mutate(Individual person, int k);
	~Mutator();
};

#endif 
//MUTATOR_H
