#include<iostream>
#include"20260707_Header1_橋冨陽心.h"

using namespace std;

void AddArray(int ary[], int index)
{
	for (int i = MIN; i < index; i++)
	{
		//入力内容が正しくなるまでループ
		while (true)
		{
			//入力
			cin >> ary[i];
			//入力内容確認
			if (MIN > ary[i] || MAX < ary[i])
			{
				//間違っていた場合、再度入力を促す
				cout << "入力内容に誤りがあります。再度入力してください\n" << endl;
			}
			else
			{
				//合っていた場合ループを抜ける
				break;
			}
		}
		
	}
}

void LineUpArray(int ary[], int even[], int odd[], int index)
{
	int num;

	for (int i = MIN; i < index; i++)
	{
		if (ary[i] % 2 == MIN)
		{
			num = SeekArray(even, MIN);
			even[num] = ary[i];
		}
		else
		{
			num = SeekArray(odd, MIN);
			odd[num] = ary[i];
		}
	}
}

int SeekArray(int ary[], int index)
{
	int num = 0;

	for (int i = MIN; i < index; i++)
	{
		if (ary[i] == MIN)
		{
			num = i;
		}
	}
	return num;
}

void ShowArray(int ary[], int index)
{
	for (int i = MIN; i < index; i++)
	{
		if (ary[i] == MIN)
		{
			break;
		}

		cout << ary[i] << endl;
	}
}
