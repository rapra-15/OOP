#include "Bird.h"

void Bird::Out_Data(ofstream& ofst) {
    ofst << "It's a Bird: " << Name << endl;
    ofst << "Is it a migration bird: "; //Выводим название птицы

    //Выводим информацию о том, мигрирует ли птица
    if (Migration)
    {
        ofst << "Yes" << endl;
    }
    else
    {
        ofst << "No" << endl;
    }

    ofst << "Bird's age is " << Age << endl;
}