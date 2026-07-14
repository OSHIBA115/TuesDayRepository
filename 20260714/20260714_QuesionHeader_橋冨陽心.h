#pragma once
//定数
const int PITCHING_MIN = 0;
const int PITCHING_MAX = 3;
const int PROBABILITY = 4;

const int STRIKE_COUNT = 3;
const int BALL_COUNT = 4;
const int OUT_COUNT = 3;
const int HIT_COUNT = 4;
//列挙体
enum PitchType
{
	Straight,
	Curve,
	Slider,
	Sinker
};
//関数プロトタイプ宣言
/// <summary>
/// 球種判別
/// </summary>
/// <param name="pitching"></param>
void PitchingType(int pitching);
/// <summary>
/// 勝敗判定
/// </summary>
/// <param name="out"></param>
void Result(int out);
/// <summary>
/// 入力＆入力チェック
/// </summary>
/// <param name="min"></param>
/// <param name="max"></param>
/// <returns></returns>
int InputCheck(int min, int max);