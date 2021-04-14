#include "Container.h"
#include "Animal.h"

void Container::Sort() {
	if (Len > 1)
	{
		Node* First = Head;
		Node* Second = Head->Next;

		Node* Temp = new Node;

		for (int i = 0; i < Len - 1; i++)
		{
			for (int j = 0; j < Len - i - 1; j++)
			{
				if (First->Cont->Compare(Second->Cont))
				{
					Temp->Cont = First->Cont;
					First->Cont = Second->Cont;
					Second->Cont = Temp->Cont;
				}

				Second = Second->Next;
			}

			First = First->Next;
			Second = First->Next;
		}
	}
}