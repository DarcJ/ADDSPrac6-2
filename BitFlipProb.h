#include "Mutator.h"
#include "Individual.h"

#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H

#include <iostream>
#include <string>

class BitFlipProb : public Mutator {

private:
	double p; //the probability 
public:
	BitFlipProb();
	BitFlipProb(double prob);
	Individual mutate(Individual I, int k);
};

#endif 
//BITFLIPPROB_H
