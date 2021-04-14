#include "Container.h"

void Container::Clear() {
    if (Head != NULL)
    {
        while (Len > 0)
        {
            free(Head->Cont);
            Head = Head->Next;
            Len--;
        }
        Head = NULL;
    }
}