#include "Fish.h"

void Fish::In_Data(ifstream& ifst) {
    ifst >> Name;
    
    string Temp_K = ""; //Строка, хранящая информацию о среде обитания рыбы

    ifst >> Temp_K; //Считывает информацию о среде обитания

    //Записываем, где обитает рыбка
    if (Temp_K == "River")
    {
        H = Fish::RIVER;
    }
    else if (Temp_K == "Sea")
    {
        H = Fish::SEA;
    }
    else if (Temp_K == "Ocean")
    {
        H = Fish::OCEAN;
    }
}