#include <iostream>
#include <cstdlib>
#include <ctime>
#include "PlayerClass.h"
using namespace std;

/*
void Player::hit()
{
	toranpuRank = rand() % 13 + 1;
}

int Player::getNumber()
{
	return toranpuRank;
}

void Player::showNumber()
{
	cout << name << "s card is " << toranpuRank << endl;
}

void judge(Player& player, Player& enemy)
{
	if (player.getNumber() > enemy.getNumber())
	{
		cout << "player win" << endl;
	}
	else if (player.getNumber() < enemy.getNumber())
	{
		cout << "enemy win" << endl;
	}
	else
	{
		cout << "draw" << endl;
	}
}
*/

//修正版

Player::Player()
{
	name[0] = { "enemy" };
	toranpuRank = 0;
}

Player::Player(const char* inname)
{
	if (inname != nullptr)
	{
		name = inname;
	}
	else
	{
		name = "unknown";
	}
	toranpuRank = 0;
}
void Player::hit()
{
	toranpuRank = rand() % 13 + 1;
}

int Player::getNumber()
{
	return toranpuRank;
}

void Player::showNumber()
{
	cout << name[0] << "s card is " << toranpuRank << endl;
}

void judge(Player& player, Player& enemy)　//修正//ここちゃんとconst付けてgetnmeber関数にもconstをつける
{
	if (player.getNumber() > enemy.getNumber())
	{
		cout << "player win" << endl;
	}
	else if (player.getNumber() < enemy.getNumber())
	{
		cout << "enemy win" << endl;
	}
	else
	{
		cout << "draw" << endl;
	}
}
