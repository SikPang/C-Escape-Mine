#pragma once
#ifndef  PLAYER_H
#define PLAYER_H
#include "Map.h"
class Player 
{
	/* �ӽ� ��ǥ */
	static int metaX;
	static int metaY;
	/* Ű�� �Է� �޴� ����*/
	static int keyTr;
	/* Ű���� ������ �ٲ� �ִ� ���� */
	static char key;
public:
	/* �� �̱����? */
	static bool isClear;
	/*�÷��̾� HP*/
	static int hp;
	/* �÷��̾� ��ġ ��ǥ*/
	static int plX, plY;
	/*���ÿ� �� Ƚ��*/
	static int paincount;
	/* �÷��̾ �����̰� �ϴ� �Լ�*/
	static int PlayerControl();
};
#endif // ! PLAYER_H
