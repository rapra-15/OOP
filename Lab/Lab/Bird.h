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
    string Get_Name();
    void Set_Name(string _Name);

    bool Get_Migration();
    void Set_Migration(bool _Migration);

    int Get_Age();
    void Set_Age(int _Age);

    void In_Data(ifstream& ifst); //Функция ввода информации о птице
    void Out_Data(ofstream& ofst); //Функция вывода информации о птице
    int Amount();
    Bird() {};
};

#endif // BIRD_H
