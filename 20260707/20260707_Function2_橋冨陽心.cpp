#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260707_Header2_橋冨陽心.h"

using namespace std;
//進行
void Game()
{
	//配列
	int plHand[3] = {};
	int enHand[3] = {};
	int Deck[10];
	//変数
	int plSelect, enSelect;
	int plWin = 0, enWin = 0;
	//乱数初期化
	srand((unsigned int)time(NULL));
	//プレイヤー手札配布
	Set(plHand, 3, Deck, 10);
	//CPU手札配布
	Set(enHand, 3, Deck, 10);
	//ゲームループ
	while (true)
	{
		cout << "===========================YOUR TURN=========================\n" << endl;
		
		for (int i = 0; i < 3; i++)
		{
			//プレイヤー予想
			InputCheck(plSelect);
			//プレイヤー予想結果
			Judgment(plSelect, enHand, plWin,i);
			//ゲーム終了判定
			if (plWin == 3)
			{
				cout << "あなたの勝ち！" << endl;
				break;
			}
		}
		//勝ち星初期化
		plWin = 0;

		cout << "===========================ENEMY TURN=========================\n" << endl;

		for (int i = 0; i < 3; i++)
		{
			//CPU予想
			enSelect = rand() % 10;
			//CPU予想結果
			Judgment(enSelect, plHand, enWin, i);
			//ゲーム終了判定
			if (enWin == 3)
			{
				cout << "CPUの勝ち！" << endl;
				break;
			}
		}
		//勝ち星初期化
		enWin = 0;
	}
}

//手札配布
void Set(int ary[], int A_index,int deck[],int D_index )
{
	int num = 0;
	//山札セット
	for (int i = 0; i < D_index; i++)
	{
		//１～９まで山札に入れる
		deck[i] = i;
	}
	//手札セット
	for (int i = 0; i < A_index; i++)
	{
		//重複確認
		while (true)
		{
			//添え字をランダムで生成
			num = rand() % 10;
			//重複していなければそのまま手札にしてループを抜ける
			if (deck[num] != -1) 
			{
				ary[i] = deck[num];
				deck[num] = -1;
				break;
			}
		}
	}
}
//当たりはずれ判定
void Judgment(int select,int ary[],int &WinPt,int index)
{
	//当たり
	if (ary[index] == select)
	{
		cout << "Hit！" << endl;
		//勝ち星＋１
		WinPt++;
	}
	//はずれ
	else
	{
		cout << "Miss！" << endl;
	}
}
//入力チェック
void InputCheck(int &sel)
{
	cout << "相手の数字を予想してください" << endl;
	//入力内容が正しくなるまでループ
	while (true)
	{
		//入力
		cin >> sel;
		//入力内容確認
		if (MIN > sel || MAX < sel)
		{
			//間違っていた場合、再度入力を促す
			cout << "入力内容に誤りがあります。再度入力してください\n" << endl;
		}
		else
		{
			//合っていた場合ループを抜ける
			break;
		}
	}
}
