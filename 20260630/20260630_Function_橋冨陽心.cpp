#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260630_Header_橋冨陽心.h"

using namespace std;

int Game()
{
	//変数
	int playerHand[5] = {};
	int enemyHand[5] = {};
	int card[11];

	//乱数初期化
	srand((unsigned int)time(NULL));

	//初期設定
	InitialSettings(card, playerHand, enemyHand);

}

void InitialSettings(int card[],int plHand[], int enHand[])
{
	//変数
	int num;
	//山札設定
	for (int i = 0; i < CARD_MAX; i++)
	{
		//山札数入れ
		card[i] = i + 1;
	}

	//手札配布(関数化）
	for (int i = 0; i < HAND_MIN; i++)
	{
		//プレイヤー初期配布
		num = rand() % CARD_MAX;
		plHand[i] = card[num];
		//プレイヤー勝ち判定
		WinJudge(plHand);
		//エネミー初期配布
		num = rand() % CARD_MAX;
		enHand[i] = card[num];
		//エネミー勝ち判定
		WinJudge(enHand);
	}
}

void WinJudge(int Hand[])
{
	//変数
	int num = 0;
	//手札合計計算
	for (int i = 0; i < HAND_MAX; i++)
	{
		num += Hand[i];
	}
	//勝ち判定
	if (num==BRACK_JACK)
	{
		cout << "BRACK JACK!!\n"
			<< "=======================GAME SET========================\n" << endl;
	}
}

void DrawCard()
{
	//変数
	int Hit;

	cout << "追加でカードを引く場合は　0　、引かずに終わる場合は　１　を選択してください\n" << endl;

	cin >> Hit;

	if (Hit == 0)
	{

	}
}