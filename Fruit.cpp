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
	cout << "������: " << smell;
}

void Fruit::getColor()
{
	cout << "���� ������: " << color;
}

void Fruit::getFruit()
{
	cout << "�� ������� �����" << (weigth == 0 ? "" : " ����� "+ to_string(weigth) + "�");
}
