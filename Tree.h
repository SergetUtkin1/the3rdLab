#pragma once
#include "Flower.h"
#include "Fruit.h"
class Tree final:
    public Flower,
    public Fruit
{
    Tree(string s_Fruit, string c_Fruit, int w_Fruit, string s_Flower, string c_Flower, int p_Flower);
public:
    void getSmell();

private:
    string smell = Flower::smell + ", " + Fruit::smell;
};

