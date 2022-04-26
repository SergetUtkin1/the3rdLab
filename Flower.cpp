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

void Flower::getSmell()
{
	cout << "Аромат: " << smell;
}

void Flower::getColor()
{
	cout << "Цвет цветка " << color;
}

void Flower::getFlower()
{
	cout << "Вы сорвали цветок";
}

void Flower::getCountOfPetal()
{
	cout << "Кол-во лепестков у этого цветка: " << (countOfPetal < 1 ? "Неопеределено" : to_string(countOfPetal));
}
