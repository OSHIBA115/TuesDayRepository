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
	for (const Enemy& enemy : enemies)
	{
		enemy.ShowHp();
	}

	int select;
	int damage;

	cout << "UŒ‚‚·‚é“G‚ð‚O`‚Q‚©‚ç‘I‘ð‚µ‚Ä‚­‚¾‚³‚¢" << endl;
	cin >> select;

	damage = rand() % 70 + 20;

	enemies[select].Damage(damage);

	for (Enemy& enemy : enemies)
	{
		enemy.ShowHp();
	}

	for (int i = 0; i < 2; i++)
	{
		if (enemies[i].hp <= 0)
		{
			enemies.erase(enemies.begin() + i);
			cout << "“G‚ðíœ‚µ‚Ü‚µ‚½\n" << endl;
		}
	}

	cout << "\n" << endl;

	for (Enemy& enemy : enemies)
	{
		enemy.ShowHp();
	}

	return 0;
}