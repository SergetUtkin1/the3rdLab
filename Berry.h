#pragma once
#include "Plant.h"
class Berry :
    public Plant
{
    Berry(string s);

public:
    void getSmell() override;
    void getColor();
    void getBerry();
    void getDiameter();

protected:
    string smell = "€года";
    string color = "какой-то цвет €годы";
    int diameter = 0;
};

