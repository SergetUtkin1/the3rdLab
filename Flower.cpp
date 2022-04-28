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
	cout << "~���������� ������ Flower \n";
}

void Flower::getSmell()
{
	cout << "������: " << smell << endl;
}

void Flower::getColor()
{
	cout << "���� ������ " << color << endl;
}

void Flower::getFlower()
{
	cout << "�� ������� ������" << endl;
}

void Flower::getCountOfPetal()
{
	cout << "���-�� ��������� � ����� ������: " << (countOfPetal < 1 ? "�������������" : to_string(countOfPetal)) << endl;
}
