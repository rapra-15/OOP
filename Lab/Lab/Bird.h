#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

//����� ����
class Bird : public Animal {
    string Name; //�������� �����
    bool Migration; //��������� �� ���
    int Age;
public:
    string Get_Name();
    void Set_Name(string _Name);

    bool Get_Migration();
    void Set_Migration(bool _Migration);

    int Get_Age();
    void Set_Age(int _Age);

    void In_Data(ifstream& ifst); //������� ����� ���������� � �����
    void Out_Data(ofstream& ofst); //������� ������ ���������� � �����
    int Amount();
    Bird() {};
};

#endif // BIRD_H
