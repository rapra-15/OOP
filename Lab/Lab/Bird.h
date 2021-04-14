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
public:
    void In_Data(ifstream& ifst); //Функция ввода информации о птице
    void Out_Data(ofstream& ofst); //Функция вывода информации о птице
    Bird() {};
};

#endif // BIRD_H
