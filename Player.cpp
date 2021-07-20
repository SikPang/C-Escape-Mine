#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "Player.h"
#include "Map.h"
using namespace std;



/*변수 구현부 : 선물 줄 때 상자만 주진 안잖아요*/
int Player::hp = 3;
int Player::plX = 1;
int Player::plY = 1;
int Player::keyTr = 0;
char Player::key = ' ';
int Player::metaX = 0;
int Player::metaY = 0;
bool Player::isClear = false;
int Player::paincount = 0;


int Player::PlayerControl() {
	system("cls");
	while (1) {
		Map::DrawMap();
		cout << endl << "		Life : ";
		for (int i = 0; i < Player::hp; i++)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
			cout << "♥";
		}

		metaX = plX;
		metaY = plY;

		key = _getch();
		keyTr = (int)key;

		switch (keyTr)
		{
		case 72://left
			metaX = plX - 1;
			break;
		case 80://right
			metaX = plX + 1;
			break;
		case 75: //up
			metaY = plY - 1;
			break;
		case 77: //down
			metaY = plY + 1;
			break;
		default:
			continue;
		}
		isClear = Map::MapChecker(metaX, metaY);
		if (isClear)
		{
			return 0;
		}
		if (hp == 0) return 1;
		if (hp == 8) return 2;
		if (paincount == 11) return 3;
		if (Map::map[1][13] == 2 && Map::mapNum==1) return 4;
		if (Map::map[5][21] == 2 && Map::mapNum==2) return 5;
	}

}