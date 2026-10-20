#pragma once
#include<string>
class Sorcerer
{
public:
	int HP = 100;
	int MP = 90;

	virtual void ShowStatus();

	virtual void UseTechnique() = 0;
};

