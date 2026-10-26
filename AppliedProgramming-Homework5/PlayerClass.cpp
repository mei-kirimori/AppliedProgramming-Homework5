#include <iostream>
#include <cstdlib>
#include <ctime>
#include "PlayerClass.h"
using namespace std;

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