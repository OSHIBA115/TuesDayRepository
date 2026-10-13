#include<iostream>
#include"Player.h"
#include"Enemy.h"
#include"Boss.h"
#include"Wizard.h"
#include"BattleManager.h"

using namespace std;

int main(void)
{
	//コンストラクタ
	Player player("勇者ハス吉");
	Wizard wizard("ツチノコ");
	Enemy enemy("スライム");
	Boss boss("魔王");
	
	BattleManager manager;

	manager.StartBattle(&player);
	manager.StartBattle(&wizard);
	manager.StartBattle(&enemy);
	manager.StartBattle(&boss);


	return 0;
}