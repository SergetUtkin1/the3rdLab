#pragma once
#include "Plant.h"
class Fruit :
    public Plant
{
public:
    Fruit(string s, string c, int w);
    Fruit(string s, string c);
    void getSmell() override;
    void getColor();
    void getFruit();

protected:
    string smell = "�����";
    string color = "�����-�� ���� ������";
    int weigth = 0;
};

