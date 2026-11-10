#include<iostream>
#include<memory>
#include"EnemySample5.h"

int main(void)
{
	/*
	Player player;
	Enemy enemy;

	Character* target = &enemy;

	target->TakeDamage(30);

	enemy.ShowStatus();

	Enemy* enemy = new Enemy();

	enemy->TakeDamage(30);
	enemy->ShowStatus();

	delete enemy;
	enemy = nullptr;

	*/

	//Enemy‚ğ¶¬‚µ‚ÄŠÇ—

	std::unique_ptr<Enemy> enemy = std::make_unique<Enemy>();

	enemy->TakeDamage(60);

	std::cout << "“G‚Ì";

	enemy->ShowStatus();


	return 0;
}