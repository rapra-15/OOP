#include "Container.h"
#include "Animal.h"

void Container::Out_Only_Fish(ofstream& ofst) {
    ofst << endl << "Only Fishes." << endl;

    for (int i = 0; i < Len; i++)
    {
        ofst << i << ": ";
        Head->Cont->Out_Only_Fish(ofst);
        Head = Head->Next;
    }
}