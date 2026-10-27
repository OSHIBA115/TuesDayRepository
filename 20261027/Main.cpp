#include"Enemy.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

int main(void)
{
	srand((unsigned int)time(NULL));
	
	vector<Enemy> enemies;

	int num = 0;

	for (int i = 0; i < 3; i++)
	{
		num = rand() % 70 + 30;
		enemies.push_back(Enemy(num));

	}

	//“o˜^‚µ‚½“à—e‚ðŒ©‚Ä‚Ý‚Ü‚µ‚å‚¤
	//”’l‚ð•Ï‚¦‚½‚¢‚È‚çconst‚Í‚¢‚ç‚È‚¢
	for (const Enemy& enemy: enemies)
	{
		enemy.ShowHp();
	}

	return 0;
}