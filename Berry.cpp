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
    cout << "~���������� ������ Berry \n";
}

void Berry::getSmell()
{
    cout << "�����: " << smell;
}

void Berry::getColor()
{
    cout << "���� �����: " << color << endl;
}

void Berry::getBerry()
{
    cout << "�� ������� �����" << endl;
}

void Berry::getDiameter()
{
    cout << "������� �����: " << (diameter == 0 ? "�������������" : to_string(diameter) + "��") << endl;
}