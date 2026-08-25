#include<iostream>
#include"20260825_Prac1_Dog.h"

using namespace std;

int main(void)
{
	//プレイヤークラスを実体化
	Dog dog;

	dog.Name;

	cout << "名前を入力してください" << endl;

	cin >> dog.Name;

	dog.ShowProfile(dog.Name);

	return 0;
}