#include "Tree.h"

Tree::Tree(string s_Fruit, string c_Fruit, int w_Fruit, 
			string s_Flower, string c_Flower, int p_Flower)
			: Fruit(s_Fruit, c_Fruit, w_Fruit), 
			Flower(s_Flower, c_Flower, p_Flower)
{

}

void Tree::getSmell()
{
	cout << "Араматы дерева: " << smell;
}
