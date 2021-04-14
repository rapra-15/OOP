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
    void In(ifstream& ifst); //Функция ввода элемента в контейнер
    void Out(ofstream& ofst); //Функция вывода элемента из контейнера
    void Clear(); //Функция очищения контейнера
    void Sort();
    Container(); //Конструктор (по сути инициализатор контейнера)
    ~Container() { Clear(); } //Деструктор
};

#endif //CONTAINER_H