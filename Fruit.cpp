#include "Fruit.h"

Fruit::Fruit(string s, string c)
{
	smell += "-" + s;
	color = c;
}

Fruit::~Fruit()
{
	cout << "~���������� ������ Fruit \n";
}

Fruit::Fruit(string s, string c, int w)
{
	smell +="-" + s;
	color = c;
	weigth = w;
}

void Fruit::getSmell()
{
	cout << "������: " << smell << endl;
}

void Fruit::getColor()
{
	cout << "���� ������: " << color << endl;
}

void Fruit::getFruit()
{
	cout << "�� ������� �����" << (weigth == 0 ? "" : " ����� "+ to_string(weigth) + "�") << endl;
}

void Fruit::getWeigthOfFruit()
{
	cout << "��� ������: " << (weigth == 0 ? "�������������" : to_string(weigth) + "�") << endl;
}