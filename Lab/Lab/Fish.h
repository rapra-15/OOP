#ifndef FISH_H
#define FISH_H

#include "Animal.h"

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

//Класс рыб
class Fish : public Animal {
    string Name; //Название рыбы

    //Среда обитания рыбы
    enum  Habitat {
        RIVER,
        SEA,
        OCEAN
    };

    Habitat H;
public:
    void In_Data(ifstream& ifst); //Функция ввода информации о рыбе
    void Out_Data(ofstream& ofst); //Функция вывода информации о рыбе
    int Amount();
    Fish() {};
};

#endif // FISH_H
