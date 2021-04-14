#include "Beast.h"

void Beast::In_Data(ifstream& ifst) {
    ifst >> Name;

    string Temp_K = ""; //Строка, хранящая информацию о типе зверя

    ifst >> Temp_K; //Считываем тип зверя

    //Записываем тип зверя
    if (Temp_K == "Predator")
    {
        B_T = Beast::PREDATOR;
    }
    else if (Temp_K == "Herbivore")
    {
        B_T = Beast::HERBIVORE;
    }
    else if (Temp_K == "Insectivorous")
    {
        B_T = Beast::INSECTIVOROUS;
    }
}