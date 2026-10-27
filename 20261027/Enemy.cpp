#include "Enemy.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;


Enemy::Enemy(int hp)
{
	this->hp = hp;
}

Enemy::~Enemy(){}

void Enemy::ShowHp() const
{
	cout << "Enemy HP:" << hp << endl;
}

void Enemy::Damage(int damage)
{
	hp = hp - damage;

	cout << "\n" << "“G‚É" << damage << "‚Ìƒ_ƒ[ƒW" << endl;
}

void Enemy::GetHp()
{
	this->hp = hp;
}