#include "EnemySample5.h"
#include<iostream>

Character::Character() :hp(100){}

void Character::TakeDamage(int damage)
{
	hp -= damage;
	if (hp < 0)
	{
		hp = 0;
	}
}
void Character::ShowStatus() const
{
	std::cout << "HP: " << hp << std::endl;
}
