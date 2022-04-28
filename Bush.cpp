#include "Bush.h"

Bush::Bush(string n, string s_Berry, string c_Berry, int d_Berry,
			string s_Flower, string c_Flower, int p_Flower)
			:Berry(s_Berry, c_Berry, d_Berry), 
			Flower(s_Flower, c_Flower, p_Flower)
{
	name = n;
}

Bush::~Bush()
{
	cout << "~Деструктор класса Bush \n";
}

void Bush::getSmell()
{
	cout << "Аромат куста: " << smell << endl;
}

void Bush::getColor()
{
	cout << "Цвета у дерева:  " << endl;
	Flower::getColor();
	Berry::getColor();
}

void Bush::getName()
{
	cout << "Название куста: " << name << endl;
}
