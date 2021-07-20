#include <iostream>
#include <Windows.h>
#include <string>
#include <conio.h>
#include "Display.h"
#include "Player.h"
using namespace std;

/*더미*/
void Display::ShowDied()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "	     ┏━━━━━━━━━━┓" << endl;
	cout << "	     ┃      ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "YOU DIED";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "      ┃" << endl;
	cout << "	     ┗━━━━━━━━━━┛" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
}

/*더미*/
void Display::ShowClear()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "	     ┏━━━━━━━━━━┓" << endl;
	cout << "	     ┃        ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << "CLEAR";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "       ┃" << endl;
	cout << "	     ┗━━━━━━━━━━┛" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
}

void Display::ShowStage1()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "	     ┏━━━━━━━━━━┓" << endl;
	cout << "	     ┃       ";
	cout << "STAGE 1";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "      ┃" << endl;
	cout << "	     ┗━━━━━━━━━━┛" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
	Sleep(1500);
}

void Display::ShowStage2()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "	     ┏━━━━━━━━━━┓" << endl;
	cout << "	     ┃       ";
	cout << "STAGE 2";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "      ┃" << endl;
	cout << "	     ┗━━━━━━━━━━┛" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
	Sleep(1500);
}

void Display::ShowStage3()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "	     ┏━━━━━━━━━━┓" << endl;
	cout << "	     ┃       ";
	cout << "STAGE 3";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "      ┃" << endl;
	cout << "	     ┗━━━━━━━━━━┛" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
	Sleep(1500);
}

int Display::MainDisplay()
{
	cout << endl<<endl << "  ┏━┓  ┏━┓  ┏━┓  ┏━┓  ┏━┓  ┏━┓" << endl;
	cout << "  ┃      ┃      ┃      ┃";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cout << "♣";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "┃  ┃  ┃  ┃" << endl;
	cout << "  ┣━┫  ┗━┓  ┃      ┣━┫  ┣━┛  ┣━┫" << endl;
	cout << "  ┃          ┃  ┃      ┃  ┃  ┃      ┃" << endl;
	cout << "  ┗━┛  ┗━┛  ┗━┛  ┻  ┻  ┻      ┗━┛" << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "           ┏┓┏┓  ┳  ┏┓┳  ┏━┓" << endl;
	cout << "           ┃┃┃┃  ┃  ┃┃┃  ┃" << endl;
	cout << "           ┃┃┃┃  ┃  ┃┃┃  ┣━┫" << endl;
	cout << "           ┃ ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "▼";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << " ┃  ┃  ┃┃┃  ┃" << endl;
	cout << "           ┗    ┛  ┻  ┻┗┛  ┗━┛" << endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "                숫자를 입력하세요 " << endl;
	cout << "	     ┏━━━━━━━━━━┓" << endl;
	cout << "	     ┃                    ┃" << endl;
	cout << "	     ┃                    ┃" << endl;
	cout << "	     ┃      1. START      ┃" << endl;
	cout << "	     ┃                    ┃" << endl;
	cout << "	     ┃      ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "              ┃" << endl;
	cout << "	     ┃      2. EXIT       ┃" << endl;
	cout << "	     ┃                    ┃" << endl;
	cout << "	     ┃                    ┃" << endl;
	cout << "	     ┗━━━━━━━━━━┛";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << "★" << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "                            made by 송광식, 김동규";

	int n;
	while (true)
	{
		n = _getch();
		if (n == '1' || n == '2') break;
	}
	system("cls");
	return n;
}

/* 프롤로그 */
void Display::Prologue()
{
	system("cls"); // 여행을 다니던 주인공은 갑작스런 지진으로 인해 광산에 갇히게 된다.
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "                   < PROLOGUE >"<< endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "	         (!@ ...속보입#&..)";
	Sleep(2000);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "                   < PROLOGUE >"<< endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "        (..방금 전 %..생한 지진&..로.." << endl;
	cout << "                       ○○광산이 무너졌&#...@)" << endl;
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "                   < PROLOGUE >"<< endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "       (○○$산에는 관광객 ^$@..명이.." <<endl;
	cout << "                      갇혀있.&#@.. 확인되었으며)" << endl;
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "                   < PROLOGUE >"<< endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "       (열..%..명이 사망하였#@으로.. " << endl;
	cout << "                    추정하고 있..#!@$%%@#)"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << endl << endl << "                    (신호 끊김)";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "                   < PROLOGUE >"<< endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "	             ...제길!" << endl;
	Sleep(1500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "                   < PROLOGUE >"<< endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "          이렇게 구조만 기다려봤자.. "<<endl;
	cout << "                      굶어 죽기만 할거야.." << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	Sleep(2000);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "                   < PROLOGUE >"<< endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "	       ..일단 움직여보자" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	Sleep(2000);
}


/*과다출혈 엔딩*/
void Display::Ending1()
{
	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	            YOU DIED" << endl;
	cout << "              피를 너무 많이 흘렸다...";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	            YOU DIED" << endl;
	cout << "	    점점 의식이 흐려지는 것 같다...";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	            YOU DIED" << endl;
	cout << "	     첫번째 엔딩 : 과다출혈";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
}


/*과유불급 엔딩*/
void Display::Ending2()
{
	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	            YOU DIED" << endl;
	cout << "	              .....";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	            YOU DIED" << endl;
	cout << "	             쿠흡!!!";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	            YOU DIED" << endl;
	cout << "	      두번째 엔딩 : 과유불급";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
}

/* 가시에 찔릴때 리액션*/
void Display::ImPain()
{
	string str;
	bool pass = false;
	switch (Player::paincount)
	{
	case 3:
		str = "아얏!";
		break;
	case 4:
		str = "아파요!";
		break;
	case 5:
		str = "너무 아파..";
		break;
	case 6:
		str = "그만...";
		break;
	case 7:
		str = "그러지 말아요..";
		break;
	case 8:
		str = "제발...";
		break;
	case 9:
		str = "살려주세요...";
		break;
	case 10:
		str = "....";
		break;
	default:
		pass = true;
		break;
	}
	if (pass) return;

	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	cout <<" 	               " << str;
	Sleep(1500);
}

/*자살 엔딩*/
void Display::Ending3()
{
	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	             ....";
	Sleep(1500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "           당신 일부러 그러시는거죠...";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "   어짜피 게임이니까 상관없다고 그러시는거죠...";
	Sleep(2500); 

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "         당신은 정말 잔인한 사람이군요...";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "          당신을 영원히 저주하겠어요...";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	             (푸슉)";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	             SUICIDE";//자살은 특수 엔딩
	cout << "	           세번째 엔딩 : 자살";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
}

/*용기병 엔딩*/
void Display::Ending4()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	cout << "	                !!";
	Sleep(1500);

	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	cout << "          (아르타니스의 발을 밟은 것 같다.)";
	Sleep(2500);

	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	cout << "        아르타니스 : 감히 내 발을 밟다니!!";
	Sleep(2500);

	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	cout << " 아르타니스 : 저녀석을 당장 용기병으로 만들어라!!";
	Sleep(2500);

	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	cout << "           눈을 떠보니 차가운 물 속에서" <<endl;
	cout << "         렌즈로 전쟁터를 바라보고 있었다.";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	       AM I REALY DIED?!?!?!?"<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "	        네번째 엔딩 : 용기병";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);

}

/*압사 엔딩*/
void Display::Ending5()
{
	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	            YOU DIED" << endl;
	cout << "	                !!";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	            YOU DIED" << endl;
	cout << "                아이템은 함정이었다.";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	            YOU DIED" << endl;
	cout << "          천장이 점점 나를 향해 내려온다.";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	            YOU DIED" << endl;
	cout << "          온 몸이 으스러지는게 느껴진다.";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	            YOU DIED" << endl;
	cout << "               다섯번째 엔딩 : 압사";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
	Sleep(2500);
}

/* 노멀 엔딩 : 탈출*/
void Display::Ending6()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	cout << "	               End"<<endl;
	cout << "           멀리서 빛이 보이기 시작한다.";
	Sleep(2500);

	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	cout << "	               End"<<endl;
	cout << "      나는 뒤도 돌아보지 않고 앞으로 달려갔다.";
	Sleep(2500);

	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	cout << "	               End"<<endl;
	cout <<"                   밖으로 나오니"<< endl;
	cout <<"      구조대원들이 놀란 표정으로 나를 데려갔다.";
	Sleep(2500);

	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	cout << "	               End"<<endl;
	cout << "             무사히 병원으로 온 나는"<< endl;
	cout << "          가족들을 다시 만날 수 있었다.";
	Sleep(2500);

	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "	             The End ?";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
}