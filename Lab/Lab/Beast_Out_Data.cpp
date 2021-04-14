#include "Beast.h"

void Beast::Out_Data(ofstream& ofst) {
    ofst << "It's a Beast: " << Name << endl;
    ofst << "Beast's type is ";

    if (B_T == Beast::PREDATOR)
    {
        ofst << "Predator" << endl;
    }
    else if (B_T == Beast::HERBIVORE)
    {
        ofst << "Herbivore" << endl;
    }
    else if (B_T == Beast::INSECTIVOROUS)
    {
        ofst << "Insectivorous" << endl;
    }
}