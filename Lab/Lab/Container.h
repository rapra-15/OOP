#ifndef CONTAINER_H
#define CONTAINER_H

#include "Node.h"
#include <fstream>

using namespace std;

//Контейнера
class Container {
    Node* Head; //Указатель на начало списка
    int Len; //Размерность контейнера
public:
    Node* Get_Head();
    void Set_Head(Node* _Head);

    int Get_Len();
    void Set_Len(int _Len);

    void In(ifstream& ifst); //Функция ввода элемента в контейнер
    void Out(ofstream& ofst); //Функция вывода элемента из контейнера
    void Clear(); //Функция очищения контейнера
    void Sort();
    void Out_Only_Fish(ofstream& ofst);
    Container(); //Конструктор (по сути инициализатор контейнера)
    ~Container() { Clear(); } //Деструктор
};

#endif //CONTAINER_H