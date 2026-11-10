#include"EnemySample.h"
#include<iostream>

EnemySample4::EnemySample4() :hp(100) {}

void EnemySample4::TakeDamage(int damage)
{
	hp -= damage;
	if (hp < 0) hp = 0;
}

void EnemySample4::ShowStatus() const
{
	std::cout << "Enemy HP: " << hp << std::endl;
}

bool EnemySample4::DeathCheck()
{
	if (hp <= 0)
	{
		return false;
	}
}

bool EnemySample4::GameSetCheck()
{
	if (hp <= 0)
	{
		return false;
	}
}