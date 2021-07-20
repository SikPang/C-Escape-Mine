#pragma once
#ifndef  PLAYER_H
#define PLAYER_H
#include "Map.h"
class Player 
{
	/* 임시 좌표 */
	static int metaX;
	static int metaY;
	/* 키값 입력 받는 변수*/
	static int keyTr;
	/* 키값을 정수로 바꿔 주는 변수 */
	static char key;
public:
	/* 저 이긴거죠? */
	static bool isClear;
	/*플레이어 HP*/
	static int hp;
	/* 플레이어 위치 좌표*/
	static int plX, plY;
	/*가시에 찔린 횟수*/
	static int paincount;
	/* 플레이어를 움직이게 하는 함수*/
	static int PlayerControl();
};
#endif // ! PLAYER_H
