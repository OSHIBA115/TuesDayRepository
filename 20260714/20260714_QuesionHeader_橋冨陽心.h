#pragma once
//定数
const int PITCHING_MIN = 0; //入力の最小値
const int PITCHING_MAX = 3;//入力の最大値
const int PROBABILITY = 4;//確率２５％＝４分の１のため最大値は４で十分

const int STRIKE_COUNT = 3;//ストライクカウントの上限
const int BALL_COUNT = 4;//ボールカウントの上限
const int OUT_COUNT = 3;//アウトカウントの上限
const int HIT_COUNT = 4;//ヒットカウントの上限
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