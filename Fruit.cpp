#include "Fruit.h"

Fruit::Fruit(string s, string c)
{
	smell += "-" + s;
	color = c;
}

Fruit::~Fruit()
{
	cout << "~Деструктор класса Fruit \n";
}

Fruit::Fruit(string s, string c, int w)
{
	smell +="-" + s;
	color = c;
	weigth = w;
}

void Fruit::getSmell()
{
	cout << "Пахнет: " << smell << endl;
}

void Fruit::getColor()
{
	cout << "Цвет фрукта: " << color << endl;
}

void Fruit::getFruit()
{
	cout << "Вы сорвали фрукт" << (weigth == 0 ? "" : " весом "+ to_string(weigth) + "г") << endl;
}

void Fruit::getWeigthOfFruit()
{
	cout << "Вес фрукта: " << (weigth == 0 ? "Неопеределено" : to_string(weigth) + "г") << endl;
}