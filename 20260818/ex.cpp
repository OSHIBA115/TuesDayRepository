#include<iostream>

using namespace std;

//ダメージ関数
void Damage(int *p)
{
	*p -= 20;
}

//回復関数
void Heal(int *p)
{
	*p += 30;
}

//メイン
int main()
{
	//初期化
	int hp = 100;
	//ダメージ
	Damage(&hp);
	//回復
	Heal(&hp);
	//表示
	cout << hp << endl;

	return 0;
}

