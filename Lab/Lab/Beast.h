#ifndef BEAST_H
#define BEAST_H

#include "Animal.h"

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

//Класс зверей
class Beast : public Animal {
    string Name; //Название зврея

    //Тип зверя
    enum Beast_Type {
        PREDATOR,
        HERBIVORE,
        INSECTIVOROUS
    };

    Beast_Type B_T;
public:
    void In_Data(ifstream& ifst); //Функция ввода информации о рыбе
    void Out_Data(ofstream& ofst); //Функция вывода информации о рыбе
    Beast() {};
};

#endif // BEAST_H
