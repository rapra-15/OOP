#include "Container.h"

Container::Container() {
    Head = new Node();
    Head->Cont = NULL;
    Head->Next = Head;
}