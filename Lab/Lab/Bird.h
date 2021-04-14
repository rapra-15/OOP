#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

//Класс птиц
class Bird : public Animal {
    string Name; //Название птицы
    bool Migration; //Мигрирует ли она
    int Age;
public:
    void In_Data(ifstream& ifst); //Функция ввода информации о птице
    void Out_Data(ofstream& ofst); //Функция вывода информации о птице
    int Amount();
    Bird() {};
};

#endif // BIRD_H
