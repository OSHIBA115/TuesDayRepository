#pragma once
//定数
const int HAND_INDEX = 10;//配列の部屋数
const int NUM_MIN = 0; //入力の最小値
const int NUM_MAX = 3;//入力の最大値
const int RANDOM_MAX = 51;//手札に配るランダムな数字の最大。randを使うことを見越して51に設定
const int TURN_MAX = 7;

//関数プロトタイプ宣言
int Game();
void Distribute(int hand[], int Index, int max);
void InputCheck(int min, int max, int& PL);
