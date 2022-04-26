#include "Fruit.h"

Fruit::Fruit(string s, string c)
{
	smell += "-" + s;
	color = c;
}

Fruit::Fruit(string s, string c, int w)
{
	smell +="-" + s;
	color = c;
	weigth = w;
}

void Fruit::getSmell()
{
	cout << "Пахнет: " << smell;
}

void Fruit::getColor()
{
	cout << "Цвет фрукта: " << color;
}

void Fruit::getFruit()
{
	cout << "Вы сорвали фрукт" << (weigth == 0 ? "" : " весом "+ to_string(weigth) + "г");
}
