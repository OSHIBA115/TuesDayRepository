#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260714_Header_橋冨陽心.h"

using namespace std;

int Game()
{
    //変数宣言
	int plHand[HAND_INDEX] = {};
	int emHand[HAND_INDEX] = {};
	int plWin = 0;
	int emWin = 0;
    int turn = 0;

	int plSelect, emSelect;

    //手札配布（PL）
    Distribute(plHand, HAND_INDEX, RANDOM_MAX);
    //手札配布（Enemy）
    Distribute(emHand, HAND_INDEX, RANDOM_MAX);

    cout << "どっちの数字が大きいかなゲーム！\n"
        << "自分の手札１０枚の中から1つ選んで相手の数字を競わせよう！\n"
        << "数字が大きかった方に３点、同じだったら両方に１点入るよ！\n"
        << "勝負は全部で７回！最後に点数が高い方が勝ちだよ！\n"
        << "=============================GAME START=========================="
        << endl;

    cout << "あなたの今回の手札はこの１０枚です！\n" << endl;
    //手札表示
    ShowHand(HAND_INDEX, plHand);

    do
    {
        //入力・入力チェック
        InputCheck(NUM_MIN, NUM_MAX, plSelect, plHand);

        do
        {
            emSelect = rand() % HAND_INDEX;

        } while (emHand[emSelect] == -1);

        cout << "あなたが選んだ数字：" << plHand[plSelect] << "\n"
            << "CPUが選んだ数字：" << emHand[emSelect] << "\n"
            << endl;


        if (plHand[plSelect] > emHand[emSelect])
        {
            cout << "あなたの勝ち！３ポイントゲット！\n"
                << endl;
            plWin += 3;
        }
        else if (plHand[plSelect] < emHand[emSelect])
        {
            cout << "CPUの勝ち！３ポイントゲット！\n"
                << endl;
            emWin += 3;
        }
        else
        {
            cout << "引き分け！お互い１ポイントゲット！\n"
                << endl;
            plWin++;
            emWin++;
        }

        plHand[plSelect] = -1;
        emHand[emSelect] = -1;

        turn++;


    } while (turn >= TURN_MAX);




	return 0;
}
//手札配布
void Distribute(int hand[], int Index, int max)
{
    for (int i = 0; i < Index; i++)
    {
        hand[i] = rand() % max;
    }
}
//手札表示
void ShowHand(int Index, int hand[])
{
    for (int i = 0; i < Index; i++)
    {
        cout << hand[i] << " , ";
    }
}

//入力＆入力チェック
void InputCheck(int min, int max, int &PL, int hand[])
{
    cout << "1～10番の中から勝負に出す数字を選んでね\n"
        << endl;
    //正しい内容が入力されるまで繰り返し
    while (true)
    {
        //player変数に入力内容を代入
        cin >> PL;
        //入力内容が0以下、または50以上、またはすでに入力済みの場合
        if (PL < NUM_MIN || PL > NUM_MAX || hand[PL] == -1)
        {
            //再度入力するよう催促
            cout << "入力に誤りがあるかすでに使った番号です。再入力してください。" << endl;
        }
        else
        {
            //正しい内容が入力されているためループを抜ける
            break;
        }
    }
}
