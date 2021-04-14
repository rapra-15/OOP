#include "Container.h"
#include "Animal.h"

void Container::In(ifstream& ifst) {
    Node* Temp, * P;

    while (!ifst.eof())
    {
        Temp = new Node();

        if (Len == 0)
        {
            if ((Head->Cont = Animal::In(ifst)) != 0)
            {
                Len++;
            }
        }
        else
        {
            if ((Temp->Cont = Animal::In(ifst)) != 0)
            {
                P = Head->Next;
                Head->Next = Temp;
                Temp->Next = P;
                Head = Temp;
                Len++;
            }
        }
    }
}