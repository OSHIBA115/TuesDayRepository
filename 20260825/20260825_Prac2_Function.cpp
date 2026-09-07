#include<iostream>
#include"20260825_Prac2_Function.h"

using namespace std;

void Game()
{
	do
	{
		//プレイヤークラスを実体化
		Calculator player;

		//変数宣言
		int userContinue;

		player.num1 = FirstInputCheck();
		player.num2 = FirstInputCheck();

		CalculaturSelect();

		cout << "計算を続けますか？ 続ける：０ 終わる：１ を入力してください。" << endl;

		cin >> userContinue;

		if (userContinue == 1)
		{
			break;
		}

	} while (true);
}

Calculator;

int FirstInputCheck()
{
	int num;

	cout << "数字を二つ入力してください" << endl;

	cin >> num;

	while (num < NUMBER_MIN)
	{
		cout << "入力内容に誤りがあります。再度入力してください。" << endl;

		cin >> num;
	}

	return num;
}

int SecondInputCheck(int max)
{
	int num;

	cout << "数字を二つ入力してください" << endl;

	cin >> num;

	while (num < NUMBER_MIN || num > max)
	{
		cout << "入力内容に誤りがあります。再度入力してください。" << endl;

		cin >> num;
	}

	return num;

}

void CalculaturSelect()
{
	Calculator player;

	int select;

	cout << "行いたい演算を 加算：０ 減算：１ 乗算：２ 除算：３ として入力してください。" << endl;

	select = SecondInputCheck(SELECT_MAX);

	switch (select)
	{
	case add:
		player.add();
		break;

	case subtract:
		player.subtract();
		break;

	case multiply:
		player.multiply();
		break;

	case divide:
		player.divide();
		break;
	}
}

void Calculator::add()
{
	int ans;

	ans = num1 + num2;

	cout << "加算結果は " << ans << " です。" << endl;
}

void Calculator::subtract()
{
	int ans;

	ans = num1 - num2;

	cout << "減算結果は " << ans << " です。" << endl;

}

void Calculator::multiply()
{
	int ans;

	ans = num1 * num2;

	cout << "乗算結果は " << ans << " です。" << endl;

}

void Calculator::divide()
{
	int ans;

	ans = num1 / num2;

	cout << "除算結果は " << ans << " です。" << endl;

}
