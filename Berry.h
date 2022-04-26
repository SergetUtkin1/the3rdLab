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
    string smell = "�����";
    string color = "�����-�� ���� �����";
    int diameter = 0;
};

