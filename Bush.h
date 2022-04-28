#pragma once
#include "Flower.h"
#include "Berry.h"

class Bush final :
    public Flower,
    public Berry
{
public:
    Bush(string n, string s_Berry, string c_Berry, int d_Berry, string s_Flower, string c_Flower, int p_Flower);

    ~Bush();

    void getSmell();
    void getColor();

    void getName();
private:
    string smell = Flower::smell + ", " + Berry::smell;
    string name;
};