#pragma once

//定数
const int MIN = 0;
const int MAX = 9;
//関数プロトタイプ宣言
/// <summary>
/// 進行
/// </summary>
void Game();
/// <summary>
/// 手札セット関数
/// </summary>
/// <param name="ary"></param>
/// <param name="A_index"></param>
/// <param name="deck"></param>
/// <param name="D_index"></param>
void Set(int ary[], int A_index, int deck[], int D_index);
/// <summary>
/// 当たりはずれ判定
/// </summary>
/// <param name="select"></param>
/// <param name="ary"></param>
/// <param name="WinPt"></param>
/// <param name="index"></param>
void Judgment(int select, int ary[], int& WinPt, int index);
/// <summary>
/// 入力チェック
/// </summary>
/// <param name="sel"></param>
void InputCheck(int& sel);

