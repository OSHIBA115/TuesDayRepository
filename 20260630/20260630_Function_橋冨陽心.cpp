#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260630_Header_‹´•y—zS.h"

using namespace std;

int Game()
{
	//’è”
	int playerHand[5] = {};
	int enemyHand[5] = {};
	int card[11];

	//—”‰Šú‰»
	srand((unsigned int)time(NULL));

	//RDİ’è
	for (int i = 0; i < CARD_MAX; i++)
	{
		card[i] = i + 1;
	}

	//èD”z•z(ŠÖ”‰»j
	for (int i = 0; i < HAND_MIN; i++)
	{
		playerHand[i] = rand() % CARD_MAX;

	}


}