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
    string smell = "фрукт";
    string color = "какой-то цвет фрукта";
    int weigth = 0;
};

