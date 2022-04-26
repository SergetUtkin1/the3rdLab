#include "Berry.h"

Berry::Berry(string s)
{
    smell = s;
}

void Berry::getSmell()
{
    cout << "Запах: " << smell;
}

void Berry::getColor()
{
    cout << "Цвет ягоды: " << color;
}

void Berry::getBerry()
{
    cout << "Вы сорвали ягоду";
}

void Berry::getDiameter()
{
    cout << "Диаметр ягоды: " << (diameter == 0 ? "Неопеределено" : to_string(diameter) + "мм");
}