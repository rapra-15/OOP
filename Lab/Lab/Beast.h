#ifndef BEAST_H
#define BEAST_H

#include "Animal.h"

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

//����� ������
class Beast : public Animal {
    string Name; //�������� �����

    //��� �����
    enum Beast_Type {
        PREDATOR,
        HERBIVORE,
        INSECTIVOROUS
    };

    Beast_Type B_T;
    int Age;
public:
    string Get_Name();
    void Set_Name(string _Name);

    Beast_Type Get_B_T();
    void Set_B_T(int _B_T);

    int Get_Age();
    void Set_Age(int _Age);

    void In_Data(ifstream& ifst); //������� ����� ���������� � ����
    void Out_Data(ofstream& ofst); //������� ������ ���������� � ����
    int Amount();
    Beast() {};
};

#endif // BEAST_H
