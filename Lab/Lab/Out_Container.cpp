#include "Container.h"

void Container::Out(ofstream& ofst) {
    ofst << "Container contains " << Len
        << " elements." << endl;

    if (Head != NULL)
    {
        for (int i = 0; i < Len; i++)
        {
            ofst << i << ": ";
            Head->Cont->Out_Data(ofst);
            ofst << "Amount of symbols in the name of animal = " << Head->Cont->Amount() << endl;
            Head = Head->Next;
        }
    }
}