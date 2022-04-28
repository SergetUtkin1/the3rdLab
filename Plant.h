#pragma once
#include <iostream>
#include <string>

using namespace std;

class Plant
{
public:
	virtual void getSmell() = 0;
	void getColor();
	void isAlive();
protected:
	string smell;
	string color;
};