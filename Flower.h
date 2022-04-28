#pragma once
#include "Plant.h"
class Flower :
    public Plant
{
public:
    Flower(string s, string c, int cnt);
    Flower(string s, string c);

    ~Flower();

    void getSmell() override;
    void getColor();

    void getFlower();
    void getCountOfPetal();

protected:
    string smell = "������";
    string color = "�����-�� ���� ������";
    int countOfPetal = 0;
};

