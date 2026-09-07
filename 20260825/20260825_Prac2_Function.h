#pragma once

using namespace std;

//定数
const int NUMBER_MIN = 0;
const int SELECT_MAX = 3;
const int CONTINUE_MAX = 1;

//関数プロトタイプ宣言
void Game();
int FirstInputCheck();
int SecondInputCheck(int max);
void CalculaturSelect();

//クラス
class Calculator
{
public:
	//プレイヤーが持っているもの
	int num1;
	int num2;

	//コンストラクタ
	Calculator();

	//プレイヤーができること
	/// <summary>
	/// 2つの数値の和を返す。
	/// </summary>
	void add();
	/// <summary>
	/// 2つの数値の差を返す。
	/// </summary>
	void subtract();
	/// <summary>
	/// 2つの数値の積を返す。
	/// </summary>
	void multiply();
	/// <summary>
	///  2つの数値の商を返す（ただし、ゼロ除算はエラーメッセージを表示）。
	/// </summary>
	void divide();

};

//列挙体
enum Cal
{
	add = 0,
	subtract,
	multiply,
	divide
};