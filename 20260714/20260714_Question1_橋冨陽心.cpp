#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260714_QuesionHeader_橋冨陽心.h"
using namespace std;


//====================================
// メイン
//====================================
int main()
{
    //変数宣言
    int player;
    int cpu;
    int probability;

    int strike = 0;
    int ball = 0;
    int out = 0;
    int hit = 0;
    //乱数初期化
    srand((unsigned int)time(nullptr));

    cout << "野球盤ゲームスタートです" << endl;
    cout << "プレイヤーはピッチャーとなり、この回を守り切ってください" << endl;
    //ゲームループ
    do
    {
        //入力内容を表示
        cout << endl;
        cout << "投げる球を選んでください" << endl;
        cout << "0:ストレート" << endl;
        cout << "1:カーブ" << endl;
        cout << "2:スライダー" << endl;
        cout << "3:シンカー" << endl;
        //入力＆入力チェック
        player = InputCheck(PITCHING_MIN, PITCHING_MAX);
        //球種を判別
        PitchingType(player);
        //CPUの行動決め
        cpu = rand() % PROBABILITY;
        //ボールorストライク、OUTorHITを決めるための確率を決定
        probability = rand() % PROBABILITY;

        //成功・失敗判定
        //PLが選んだ球種とCPUが選んだ球種が違う場合
        if (player != cpu)
        {
            //尚且つprobability変数の値が０の場合（つまり２５％）はボール
            if (probability == 0)
            {
                cout << "ボール！" << endl;
                //ボールカウント＋１
                ball++;
            }
            //そうでない場合（つまり７５％）はストライク
            else
            {
                cout << "ストライク！！" << endl;
                //ストライクカウント＋１
                strike++;
            }
        }
        //PLが選んだ球種とCPUが選んだ球種が同じ場合
        else
        {
            //OUTもしくはHITのどちらかになるためボール・ストライクのカウントは０に戻る
            strike = 0;
            ball = 0;
            //尚且つprobability変数の値が０の場合（つまり２５％）はOUT
            if (probability == 1)
            {
                cout << "OUT!!" << endl;
                //アウトカウント＋１
                out++;
            }
            //そうでない場合（つまり７５％）はHIT
            else
            {
                cout << "HIT!!" << endl;
                //ヒットカウント＋１
                hit++;
            }
        }

        //ストライクのカウントが３以上、もしくはボールのカウントが４以上になった場合
        if (strike >= STRIKE_COUNT || ball >= BALL_COUNT)
        {
            //ストライクカウントが３以上溜まったら三振アウトとしてアウトカウントに＋１
            if (strike >= STRIKE_COUNT)
            {
                cout << "三振アウト！" << endl;
                out++;
            }
            //ボールカウントが４以上溜まったらフォアボールとしてヒットカウントに＋１
            else
            {
                cout << "フォアボール！" << endl;
                hit++;
            }
            //ストライク・ボールカウントが最大値まで溜まったため０にリセット
            strike = 0;
            ball = 0;
        }
        //現在の各カウント数を表示
        cout << endl;
        cout << "B : " << ball << endl;
        cout << "S : " << strike << endl;
        cout << "O : " << out << endl;
        cout << "Runner : " << hit << endl;
        //アウトカウントが４以上またはヒットカウントが５以上の場合ループを抜ける
        //書いてあるのをそのまま読むとアウトが３以下かつヒットが４以下の場合はループを続ける
    } while (out < OUT_COUNT && hit < HIT_COUNT);
    //最終結果を表示
    Result(out);
    //０を返しゲーム終了
    return 0;
}