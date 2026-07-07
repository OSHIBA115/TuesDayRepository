#include<iostream>
#include"20260707_Header1_橋冨陽心.h"

using namespace std;

int main(void)
{
	//配列
	int ary[INDEX];
	int even[INDEX] = {};
	int odd[INDEX] = {};
	//入力＆チェック
	AddArray(ary, INDEX);
	//偶数・奇数に振り分け
	LineUpArray(ary, even, odd, INDEX);
	//偶数表示
	cout << "偶数：" << endl;
	ShowArray(even, INDEX);
	//奇数表示
	cout << "奇数：" << endl;
	ShowArray(odd, INDEX);

	return 0;
}





