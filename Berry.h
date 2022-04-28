#pragma once
#include "Plant.h"
class Berry :
    public Plant
{
public:
    Berry(string s, string c, int d);
    Berry(string s, string c);

    ~Berry();

    void getSmell() override;
    void getColor();

    void getBerry();
    void getDiameter();

protected:
    string smell = "€года";
    string color = "какой-то цвет €годы";
    int diameter = 0;
};

