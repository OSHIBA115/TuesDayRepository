#include<iostream>
#include"20260825_Prac2_Function.h"

using namespace std;

int main(void)
{
	int Select = 0;
	int finish = 0;

	Calculator calculator;

	calculator.num1;
	calculator.num2;

	do
	{
		cin >> calculator.num1;
		cin >> calculator.num2;

		if (Select == 0)
		{
			cout << calculator.add(calculator.num1, calculator.num2);

		}
		else if (Select == 1)
		{
			cout << calculator.subtract(calculator.num1, calculator.num2);
		}
		else if (Select == 2)
		{
			if (calculator.num2 == 0)
			{
				cout << "0‚ÅŠ„‚é‚±‚Æ‚Í‚Å‚«‚Ü‚¹‚ñ";
			}
			cout << calculator.multiply(calculator.num1, calculator.num2);
		}
		else if (Select == 3)
		{
			cout << calculator.divide(calculator.num1, calculator.num2);
		}

		cin >> finish;

	} while (finish == 0);

	return 0;
}