#include <iostream>
#include <cstdlib>
#include <ctime>
#include "PlayerClass.h"
using namespace std;

//Player player;
//Player enemy;

//int main()
//{
//		srand((unsigned int)time(nullptr));
//		player.name = "player";
//		enemy.name = "enemy";
//		cout << "draws a card" << endl;
//		player.hit();
//		enemy.hit();
//		player.showNumber();
//		enemy.showNumber();
//		judge(player, enemy);
//}


//修正版
Player enemy;

int main()
{
	srand((unsigned int)time(nullptr));
	char inname[32];
	cin >> inname;
	Player player(inname);
	cout << "draws a card" << endl;
	player.hit();
	enemy.hit();
	player.showNumber();
	enemy.showNumber();
	judge(player, enemy);
}
