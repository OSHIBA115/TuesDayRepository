#include "Game.h"
#include"Enemy.h"

#include<iostream>
#include<memory>

using namespace std;

void Game::Pointer()
{
	cout << "\n===== 通常のポインタ =====\n";

	//オブジェクト
	Enemy enemy1("DQN");
	Enemy enemy2("フレネミー");

	//オブジェクトのアドレスを取得
	Enemy* target = &enemy1;

	//ポインタを使って操作
	target->Draw();

	//ターゲットをenemy2に切り替えた
	target = &enemy2;
	target->Draw();
	target->Damage(50);
}

void Game::Unique()
{
	cout << "\n===== unique_ptr =====\n";
	//Enemy生成
	unique_ptr<Enemy>enemy1 = make_unique<Enemy>("税金");
	enemy1->Draw();

	//所有権を移動
	unique_ptr<Enemy>enemy2 = move(enemy1);

	cout << "所有権を移動させました。\n";
	if (enemy1 == nullptr)
	{
		cout << "enemy1は空っぽです\n";
	}

	enemy2->Draw();
	enemy2->Damage(70);
}

void Game::Shared()
{
	cout << "\n===== shared_ptr =====\n";
	shared_ptr<Enemy>enemy1 = make_shared<Enemy>("月曜日");
	cout << "所有者数" << enemy1.use_count() << endl;

	//所有権を共有する
	shared_ptr<Enemy>enemy2 = enemy1;
	cout << "所有者数" << enemy2.use_count() << endl;

	enemy1->Damage(20);
	enemy2->Draw();

	//Enemy2を削除
	enemy2.reset();

	cout << "所有者数" << enemy1.use_count() << endl;
}

void Game::Run() 
{
	// Pointer();
	// Unique();
	Shared();
}
