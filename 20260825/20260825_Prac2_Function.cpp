#include<iostream>
#include"20260825_Prac2_Function.h"

using namespace std;

void Game()
{
	//ƒvƒŒƒCƒ„[ƒNƒ‰ƒX‚ğÀ‘Ì‰»
	Calculator;

	//•Ï”éŒ¾
	int user1, user2, select, userContinue;

	cout << "”š‚ğ“ñ‚Â“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << endl;

	cin >> user1;
	cin >> user2;

	cout << "s‚¢‚½‚¢‰‰Z‚ğ ‰ÁZF‚O Œ¸ZF‚P æZF‚Q œZF‚R ‚Æ‚µ‚Ä“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B" << endl;

	cin >> select;

	switch (select)
	{
	case add:
		Calculator::add;
		break;

	case subtract:
		Calculator::subtract;
		break;

	case multiply:
		Calculator::multiply;
		break;

	case divide:
		Calculator::divide;
	}

	cout << "ŒvZ‚ğ‘±‚¯‚Ü‚·‚©H ‘±‚¯‚éF‚O I‚í‚éF‚P ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B" << endl;

	cin >> userContinue;

	if (userContinue == 0)
	{

	}
	else
	{

	}




}

void InputCheck(int max,int min)
{

}

void Calculator::add()
{

}

void Calculator::subtract()
{

}

void Calculator::multiply()
{

}

void Calculator::divide()
{

}
