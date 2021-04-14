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
    int Age;
public:
    string Get_Name();
    void Set_Name(string _Name);

    Habitat Get_H();
    void Set_H(int _H);

    int Get_Age();
    void Set_Age(int _Age);

    void In_Data(ifstream& ifst); //Функция ввода информации о рыбе
    void Out_Data(ofstream& ofst); //Функция вывода информации о рыбе
    int Amount();
    void Out_Only_Fish(ofstream& ofst);
    Fish() {};
};

#endif // FISH_H
