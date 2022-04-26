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
	cout << "������: " << smell;
}

void Flower::getColor()
{
	cout << "���� ������ " << color;
}

void Flower::getFlower()
{
	cout << "�� ������� ������";
}

void Flower::getCountOfPetal()
{
	cout << "���-�� ��������� � ����� ������: " << (countOfPetal < 1 ? "�������������" : to_string(countOfPetal));
}
