#include "Berry.h"

Berry::Berry(string s)
{
    smell = s;
}

void Berry::getSmell()
{
    cout << "�����: " << smell;
}

void Berry::getColor()
{
    cout << "���� �����: " << color;
}

void Berry::getBerry()
{
    cout << "�� ������� �����";
}

void Berry::getDiameter()
{
    cout << "������� �����: " << (diameter == 0 ? "�������������" : to_string(diameter) + "��");
}