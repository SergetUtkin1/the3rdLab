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
    string smell = "фрукт";
    string color = "какой-то цвет фрукта";
    int weigth = 0;
};

