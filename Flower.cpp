#include "Flower.h"

Flower::Flower(string s, string c, int cnt)
{
	smell = s;
	color = c;
	countOfPetal = cnt;
}

Flower::Flower(string s, string c)
{
	smell = s;
	color = c;
}

Flower::~Flower()
{
	cout << "~Деструктор класса Flower \n";
}

void Flower::getSmell()
{
	cout << "Аромат: " << smell << endl;
}

void Flower::getColor()
{
	cout << "Цвет цветка " << color << endl;
}

void Flower::getFlower()
{
	cout << "Вы сорвали цветок" << endl;
}

void Flower::getCountOfPetal()
{
	cout << "Кол-во лепестков у этого цветка: " << (countOfPetal < 1 ? "Неопеределено" : to_string(countOfPetal)) << endl;
}
