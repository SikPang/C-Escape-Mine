#include<iostream>
#include<conio.h>
#include<windows.h>
#include <fstream>
#include "Map.h"
#include "Player.h"
#include "Display.h"

using namespace std;

void end(int state)
{
	switch (state)
	{
	case 0: //클리어
		break;
	case 1: //1번엔딩
		Display::Ending1();
		break;
	case 2://2번엔딩
		Display::Ending2();
		break;
	case 3://자살
		Display::Ending3();
		break;
	case 4://용기병
		Display::Ending4();
		break;
	case 5://압사
		Display::Ending5();
		break;
	}
	if (state >= 1 && state <= 5) {
		_getch();
		exit(0);
	}
}

void RemoveCursor()
{
	CONSOLE_CURSOR_INFO curInfo;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curInfo);
	curInfo.bVisible = 0;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curInfo);
}

int main()
{
	int state;
	system("mode con: cols=51 lines=27");
	RemoveCursor();
	Player::plX = 1;
	Player::plY = 1;

	int n = Display::MainDisplay();
	if (n == '2') return 0;

	Display::Prologue();

	Display::ShowStage1();
	Map::SetMap(1);
	state = Player::PlayerControl();
	end(state);

	Display::ShowStage2();
	Map::SetMap(2);
	state = Player::PlayerControl();
	end(state);

	Display::ShowStage3();
	Map::SetMap(3);
	state = Player::PlayerControl();
	end(state);

	Display::Ending6();
	_getch();
	return 0;
}
