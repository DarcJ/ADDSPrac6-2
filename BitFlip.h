#include "Mutator.h"
#include "Individual.h"

#ifndef BITFLIP_H
#define BITFLIP_H

#include <iostream>
#include <string>

class BitFlip : public Mutator {

private:

public:
	Individual mutate(Individual I, int k);

};

#endif 
//BITFLIP_H
