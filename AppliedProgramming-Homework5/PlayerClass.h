#pragma once
//class Player
//{
/*	public:
	void hit();
	int getNumber();
	void showNumber();
	const char* name;
	
private:
	int toranpuRank;
};

void judge(Player& player, Player& enemy);
*/

//修正版

class Player
{
public:
	void hit();
	int getNumber();
	void showNumber();
	const char* name;
	Player();
	Player(const char* inname);
private:
	int toranpuRank;

};

void judge(Player& player, Player& enemy);
