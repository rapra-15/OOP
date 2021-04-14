#include "Animal.h"

bool Animal::Compare(Animal* other) {
	return Amount() > other->Amount();
}