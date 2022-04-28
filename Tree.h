#pragma once
#include "Flower.h"
#include "Fruit.h"
class Tree final:
    public Flower,
    public Fruit
{
public:
    Tree(string n, string s_Fruit, string c_Fruit, int w_Fruit, string s_Flower, string c_Flower, int p_Flower);

    ~Tree();

    void getSmell();
    void getColor();

    void getName();
private:
    string smell = Flower::smell + ", " + Fruit::smell;
    string name;
};

