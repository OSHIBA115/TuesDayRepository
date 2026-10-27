#pragma once
class Enemy
{
public:
	int hp;

	Enemy(int hp);
	~Enemy();

	void ShowHp() const;
	void Damage(int damage);
	void GetHp();
};

