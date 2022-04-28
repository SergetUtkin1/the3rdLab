#pragma once
#include "Plant.h"
class Fruit :
    public Plant
{
public:
    Fruit(string s, string c, int w);
    Fruit(string s, string c);

    ~Fruit();

    void getSmell() override;
    void getColor();

    void getFruit();
    void getWeigthOfFruit();

protected:
    string smell = "�����";
    string color = "�����-�� ���� ������";
    int weigth = 0;
};

