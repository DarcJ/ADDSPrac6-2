#include "Mutator.h"
#include "Individual.h"

#ifndef REARRANGE_H
#define REARRANGE_H

#include <iostream>
#include <string>

class Rearrange : public Mutator {

private:

public:
	Individual mutate(Individual I, int k);

};

#endif 
//REARRANGE_H
