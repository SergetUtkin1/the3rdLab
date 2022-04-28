#include "Berry.h"

Berry::Berry(string s, string c, int d)
{
    smell = s;
    color = c;
    diameter = d;
}

Berry::Berry(string s, string c)
{
    smell = s;
    color = c;
}

Berry::~Berry()
{
    cout << "~Деструктор класса Berry \n";
}

void Berry::getSmell()
{
    cout << "Запах: " << smell;
}

void Berry::getColor()
{
    cout << "Цвет ягоды: " << color << endl;
}

void Berry::getBerry()
{
    cout << "Вы сорвали ягоду" << endl;
}

void Berry::getDiameter()
{
    cout << "Диаметр ягоды: " << (diameter == 0 ? "Неопеределено" : to_string(diameter) + "мм") << endl;
}