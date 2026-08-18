#include"Card.h"
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	int ary[TOTAL_CARD];
	createCard(ary);

	shuffleCard(ary);

	showCard(ary);

	return 0;
}