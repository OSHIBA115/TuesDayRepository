#pragma once

using namespace std;

class Calculator
{
public:
	//プレイヤーが持っているもの
	int num1, num2;

	//プレイヤーができること
	int add(int num1,int num2);
	int subtract(int num1, int num2);
	int multiply(int num1, int num2);
	int divide(int num1, int num2);

};