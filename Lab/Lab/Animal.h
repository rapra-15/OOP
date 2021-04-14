#ifndef ANIMAL_H
#define ANIMAL_H

#include <fstream>

using namespace std;

class Animal {
public:
    static Animal* In(ifstream& ifst); //Функция ввода информации о животном
    virtual void In_Data(ifstream& ifst) = 0; //Чисто вирутальная функция ввода информации
                                              //о животном, она будет определена для
                                              //каждого класса животного
    virtual void Out_Data(ofstream& ofst) = 0; //Чисто вирутальная функция вывода информации
                                              //о животном, она будет определена для
                                              //каждого класса животного
    virtual int Amount() = 0;
    bool Compare(Animal* other);
    virtual void Out_Only_Fish(ofstream& ofst);
protected:
    Animal() {};
};

#endif // ANIMAL_H
