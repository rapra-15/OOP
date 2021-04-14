#ifndef CONTAINER_H
#define CONTAINER_H

#include "Node.h"
#include <fstream>

using namespace std;

//����������
class Container {
    Node* Head; //��������� �� ������ ������
    int Len; //����������� ����������
public:
    Node* Get_Head();
    void Set_Head(Node* _Head);

    int Get_Len();
    void Set_Len(int _Len);

    void In(ifstream& ifst); //������� ����� �������� � ���������
    void Out(ofstream& ofst); //������� ������ �������� �� ����������
    void Clear(); //������� �������� ����������
    void Sort();
    void Out_Only_Fish(ofstream& ofst);
    Container(); //����������� (�� ���� ������������� ����������)
    ~Container() { Clear(); } //����������
};

#endif //CONTAINER_H