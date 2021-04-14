#include "Fish.h"

void Fish::Out_Data(ofstream& ofst) {
    ofst << "It's a Fish: " << Name << endl;
    ofst << "Fish's habitat is "; //Выводим название рыбы

    //Выводим среду обитания рыбы
    if (H == Fish::RIVER)
    {
        ofst << "River" << endl;
    }
    else if (H == Fish::SEA)
    {
        ofst << "Sea" << endl;
    }
    else if (H == Fish::OCEAN)
    {
        ofst << "Ocean" << endl;
    }
}