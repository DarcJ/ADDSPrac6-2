#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

#include <iostream>
#include <string>

using namespace std;

Individual * execute(Individual * indPtr, Mutator * mPtr, int k) { 
	Individual * offspring = new Individual(1);
	*offspring = mPtr->mutate(*indPtr, k);
	
	return offspring;

}

	


int main() {

//create the strings and ints 
string binarystr1;
string binarystr2;
int k1;
int k2;

cin >> binarystr1;
cin >> k1;
cin >> binarystr2;
cin >> k2;

//create the Individuals
Individual * person1 = new Individual(binarystr1);
Individual * person2 = new Individual(binarystr2);

//create the mutators 
Mutator * bitflip = new BitFlip();
Mutator * rearrange = new Rearrange();

//create the offsprings
Individual * offspring1 = new Individual(1);
Individual * offspring2 = new Individual(1);
offspring1 = execute(person1, bitflip, k1);
offspring2 = execute(person2, rearrange, k2);


cout << offspring1->getString() << " ";
cout << offspring2->getString() << " ";
cout << offspring2->getMaxOnes() << endl;


}