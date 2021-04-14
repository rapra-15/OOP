#ifndef NODE_H
#define NODE_H

#include "Animal.h"

//”зел контейнера
struct Node {
    Node* Next; //”казатель на следующий узел
    Animal* Cont; //”казатель на класс животных
};

#endif //NODE_H