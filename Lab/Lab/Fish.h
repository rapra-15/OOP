#ifndef FISH_H
#define FISH_H

#include "Animal.h"

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

//����� ���
class Fish : public Animal {
    string Name; //�������� ����

    //����� �������� ����
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

    void In_Data(ifstream& ifst); //������� ����� ���������� � ����
    void Out_Data(ofstream& ofst); //������� ������ ���������� � ����
    int Amount();
    void Out_Only_Fish(ofstream& ofst);
    Fish() {};
};

#endif // FISH_H
