#include<iostream>
#include"Player.h"
#include"Enemy.h"
#include"Boss.h"

using namespace std;

int main(void)
{
	//コンストラクタ
	Player player;
	Enemy enemy;
	Boss boss;

	Character* character;//ポインタ型

	character = &player;//プレイヤーのポインタを受け取る
	character->Attack();
	character = &enemy;//敵のポインタを受け取る
	character->Attack();
	character = &boss;//ボスのポインタを受け取る
	character->Attack();


	return 0;
}