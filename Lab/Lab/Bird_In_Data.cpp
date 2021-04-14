#include  "Bird.h"

void Bird::In_Data(ifstream& ifst) {
    ifst >> Name; //—читываем название птицы
    ifst >> Migration; //—читываем информацию о том, мигрирует ли она
    ifst >> Age;
}