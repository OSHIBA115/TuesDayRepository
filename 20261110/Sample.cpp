#include<iostream>
#include"EnemySample.h"

int main(void)
{
	/*
	EnemySample4 enemy1;
	EnemySample4 enemy2;
	EnemySample4 enemy3;

	EnemySample4* target = &enemy1;

	target->TakeDamage(30);

	target = &enemy2;
	target->TakeDamage(50);

	target = &enemy3;
	target->TakeDamage(70);

	enemy1.ShowStatus();
	enemy2.ShowStatus();
	enemy3.ShowStatus();

	

	std::unique_ptr<EnemySample4>enemy1 = std::make_unique<EnemySample4>();

	enemy1->ShowStatus();
	std::unique_ptr<EnemySample4>enemy2;
	enemy2 = std::move(enemy1);
	// enemy2 = enemy1;@©@‚±‚ê‚Íƒ_ƒ
	enemy2->TakeDamage(20);
	enemy2->ShowStatus();

	*/

	std::unique_ptr<EnemySample4>enemy1 = std::make_unique<EnemySample4>(100);
	std::unique_ptr<EnemySample4>enemy2 ;
	std::unique_ptr<EnemySample4>enemy3 ;

	int select = 0;
	bool death = true;
	int gameSetCount = 0;

	while (gameSetCount < 3)
	{
		std::cout << "UŒ‚‚µ‚½‚¢“G‚ð‚P`‚R‚Å‘I‘ð‚µ‚Ä‰º‚³‚¢" << std::endl;

		std::cin >> select;

		while (select < 1 || select > 3)
		{
			std::cout << "“ü—Í“à—e‚ÉŒë‚è‚ª‚ ‚è‚Ü‚·BÄ“x“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B" << std::endl;

			std::cin >> select;
		}

		if (select == 1)
		{
			/*
			death = enemy1->DeathCheck();

			if (death == false)
			{
				std::cout << "‘I‘ð‚³‚ê‚½“G‚Í‚·‚Å‚ÉŽ€‚ñ‚Å‚¢‚Ü‚·B" << std::endl;

				std::cin >> select;
			}
			*/

			enemy1->TakeDamage(30);
			enemy1->ShowStatus();
		}
		else if (select == 2)
		{
			enemy2 = std::move(enemy1);

			/*
			death = enemy2->DeathCheck();

			if (death == false)
			{
				std::cout << "‘I‘ð‚³‚ê‚½“G‚Í‚·‚Å‚ÉŽ€‚ñ‚Å‚¢‚Ü‚·B" << std::endl;

				std::cin >> select;

				while (select < 1 || select < 3 || select == 2)
				{
					std::cout << "‘I‘ð‚³‚ê‚½“G‚Í‚·‚Å‚ÉŽ€‚ñ‚Å‚¢‚Ü‚·B" << std::endl;

					std::cin >> select;
				}

			}
			*/

			enemy2->TakeDamage(30);
			enemy2->ShowStatus();
			enemy1 = std::move(enemy2);
		}
		else if (select == 3)
		{
			enemy3 = std::move(enemy1);

			/*
			death = enemy3->DeathCheck();

			if (death == false)
			{
				std::cout << "‘I‘ð‚³‚ê‚½“G‚Í‚·‚Å‚ÉŽ€‚ñ‚Å‚¢‚Ü‚·B" << std::endl;

				std::cin >> select;

				while (select < 1 || select < 3 || select == 3)
				{
					std::cout << "‘I‘ð‚³‚ê‚½“G‚Í‚·‚Å‚ÉŽ€‚ñ‚Å‚¢‚Ü‚·B" << std::endl;

					std::cin >> select;
				}

			}
			*/

			enemy3->TakeDamage(30);
			enemy3->ShowStatus();
			enemy1 = std::move(enemy3);
		}

		if (enemy1->GameSetCheck() == false)
		{
			gameSetCount += 1;
		}
		enemy2 = std::move(enemy1);
		if (enemy2->GameSetCheck() == false)
		{
			gameSetCount += 1;
		}
		enemy3 = std::move(enemy1);
		if (enemy3->GameSetCheck() == false)
		{
			gameSetCount += 1;
		}

	}

	return 0;
}