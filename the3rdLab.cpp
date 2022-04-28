#include <iostream>
#include "Tree.h"
#include "Bush.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	Fruit myFruit("Фруктозапах", "Оранжево-Желтый", 200);
	myFruit.getSmell();

	Flower myFlower("Роза", "Голубой", 7);
	myFlower.getColor();

	Berry myBerry("Вишня", "Красный", 24);
	myBerry.getBerry();

	Tree myTree("Яблоня", "Яблоко", "Зеленый", 123 , "Фиалка", "Белый", 4);
	myTree.getFruit();

	Bush myBush("Кустовик", "Клубника", "Красная", 23, "Сирень", "Белый", 7);
	myBush.getSmell();
}