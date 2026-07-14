#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260714_QuesionHeader_橋冨陽心.h"
using namespace std;
//球種の判別
void PitchingType(int pitching)
{
    //列挙体を利用して球種を判別
    switch (pitching)
    {
        //入力内容が１の場合
    case Straight:
        cout << "ストレート" << endl;
        break;
        //入力内容が２の場合
    case Curve:
        cout << "カーブ" << endl;
        break;
        //入力内容が３の場合
    case Slider:
        cout << "スライダー" << endl;
        break;
        //入力内容が４の場合
    case Sinker:
        cout << "シンカー" << endl;
        break;
    }
}
//最終的な勝敗を表示
void Result(int out)
{
    //アウトカウントが３以上の場合
    if (out >= OUT_COUNT)
    {
        //プレイヤーの勝利
        cout << "PLAYER WINNER!!" << endl;
    }
    //アウトカウントが３未満の場合
    //ループを抜ける条件がアウトカウントが４以上またはヒットカウントが５以上のため
    //アウトカウントが３以上に当てはまらない＝ヒットカウントが５以上になっているということになる
    else
    {
        //CPUの勝利
        cout << "CPU WINNER!!" << endl;
    }
}
//入力＆入力チェック
int InputCheck(int min, int max)
{
    //変数宣言
    int player;//入力内容を保存して返すため
    //正しい内容が入力されるまで繰り返し
    while (true)
    {
        //player変数に入力内容を代入
        cin >> player;
        //入力内容が０以下、または４以上の場合
        if (player < PITCHING_MIN || player > PITCHING_MAX)
        {
            //再度入力するよう催促
            cout << "入力に誤りがあります。再入力してください。" << endl;
        }
        else
        {
            //正しい内容が入力されているためループを抜ける
            break;
        }
    }
    //プレイヤーの値を返す
    return player;
}