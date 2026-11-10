#include<iostream>
#include"EnemySample5.h"

int main(void)
{
	/*
	Player player;
	Enemy enemy;

	Character* target = &enemy;

	target->TakeDamage(30);

	enemy.ShowStatus();
	*/

	Enemy* enemy = new Enemy();

	enemy->TakeDamage(30);
	enemy->ShowStatus();

	delete enemy;
	enemy = nullptr;

	return 0;
}