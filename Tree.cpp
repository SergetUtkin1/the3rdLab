#include "Tree.h"

Tree::Tree(string n, string s_Fruit, string c_Fruit, int w_Fruit,
			string s_Flower, string c_Flower, int p_Flower)
			: Fruit(s_Fruit, c_Fruit, w_Fruit), 
			Flower(s_Flower, c_Flower, p_Flower)
{
	name = n;
}

Tree::~Tree()
{
	cout << "~Деструктор класса Tree \n";
}

void Tree::getSmell()
{
	cout << "Ароматы дерева: " << smell << endl;
}

void Tree::getColor()
{
	cout << "Цвета у дерева:  " << endl;
	Flower::getColor();
	Fruit::getColor();
}

void Tree::getName()
{
	cout << "Название дерева: " << name << endl;
}