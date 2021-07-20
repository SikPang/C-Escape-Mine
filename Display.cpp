#include <iostream>
#include <Windows.h>
#include <string>
#include <conio.h>
#include "Display.h"
#include "Player.h"
using namespace std;

/*����*/
void Display::ShowDied()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "	     ������������������������" << endl;
	cout << "	     ��      ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "YOU DIED";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "      ��" << endl;
	cout << "	     ������������������������" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
}

/*����*/
void Display::ShowClear()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "	     ������������������������" << endl;
	cout << "	     ��        ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << "CLEAR";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "       ��" << endl;
	cout << "	     ������������������������" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
}

void Display::ShowStage1()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "	     ������������������������" << endl;
	cout << "	     ��       ";
	cout << "STAGE 1";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "      ��" << endl;
	cout << "	     ������������������������" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
	Sleep(1500);
}

void Display::ShowStage2()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "	     ������������������������" << endl;
	cout << "	     ��       ";
	cout << "STAGE 2";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "      ��" << endl;
	cout << "	     ������������������������" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
	Sleep(1500);
}

void Display::ShowStage3()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "	     ������������������������" << endl;
	cout << "	     ��       ";
	cout << "STAGE 3";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "      ��" << endl;
	cout << "	     ������������������������" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
	Sleep(1500);
}

int Display::MainDisplay()
{
	cout << endl<<endl << "  ������  ������  ������  ������  ������  ������" << endl;
	cout << "  ��      ��      ��      ��";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cout << "��";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "��  ��  ��  ��" << endl;
	cout << "  ������  ������  ��      ������  ������  ������" << endl;
	cout << "  ��          ��  ��      ��  ��  ��      ��" << endl;
	cout << "  ������  ������  ������  ��  ��  ��      ������" << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "           ��������  ��  ������  ������" << endl;
	cout << "           ��������  ��  ������  ��" << endl;
	cout << "           ��������  ��  ������  ������" << endl;
	cout << "           �� ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "��";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << " ��  ��  ������  ��" << endl;
	cout << "           ��    ��  ��  ������  ������" << endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "                ���ڸ� �Է��ϼ��� " << endl;
	cout << "	     ������������������������" << endl;
	cout << "	     ��                    ��" << endl;
	cout << "	     ��                    ��" << endl;
	cout << "	     ��      1. START      ��" << endl;
	cout << "	     ��                    ��" << endl;
	cout << "	     ��      ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "              ��" << endl;
	cout << "	     ��      2. EXIT       ��" << endl;
	cout << "	     ��                    ��" << endl;
	cout << "	     ��                    ��" << endl;
	cout << "	     ������������������������";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << "��" << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "                            made by �۱���, �赿��";

	int n;
	while (true)
	{
		n = _getch();
		if (n == '1' || n == '2') break;
	}
	system("cls");
	return n;
}

/* ���ѷα� */
void Display::Prologue()
{
	system("cls"); // ������ �ٴϴ� ���ΰ��� ���۽��� �������� ���� ���꿡 ������ �ȴ�.
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "                   < PROLOGUE >"<< endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "	         (!@ ...�Ӻ���#&..)";
	Sleep(2000);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "                   < PROLOGUE >"<< endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "        (..��� �� %..���� ����&..��.." << endl;
	cout << "                       �ۡ۱����� ������&#...@)" << endl;
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "                   < PROLOGUE >"<< endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "       (�ۡ�$�꿡�� ������ ^$@..����.." <<endl;
	cout << "                      ������.&#@.. Ȯ�εǾ�����)" << endl;
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "                   < PROLOGUE >"<< endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "       (��..%..���� ����Ͽ�#@����.. " << endl;
	cout << "                    �����ϰ� ��..#!@$%%@#)"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << endl << endl << "                    (��ȣ ����)";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "                   < PROLOGUE >"<< endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "	             ...����!" << endl;
	Sleep(1500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "                   < PROLOGUE >"<< endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "          �̷��� ������ ��ٷ�����.. "<<endl;
	cout << "                      ���� �ױ⸸ �Ұž�.." << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	Sleep(2000);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "                   < PROLOGUE >"<< endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "	       ..�ϴ� ����������" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	Sleep(2000);
}


/*�������� ����*/
void Display::Ending1()
{
	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	            YOU DIED" << endl;
	cout << "              �Ǹ� �ʹ� ���� ��ȴ�...";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	            YOU DIED" << endl;
	cout << "	    ���� �ǽ��� ������� �� ����...";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	            YOU DIED" << endl;
	cout << "	     ù��° ���� : ��������";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
}


/*�����ұ� ����*/
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
	cout << "	             ����!!!";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	            YOU DIED" << endl;
	cout << "	      �ι�° ���� : �����ұ�";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
}

/* ���ÿ� �񸱶� ���׼�*/
void Display::ImPain()
{
	string str;
	bool pass = false;
	switch (Player::paincount)
	{
	case 3:
		str = "�ƾ�!";
		break;
	case 4:
		str = "���Ŀ�!";
		break;
	case 5:
		str = "�ʹ� ����..";
		break;
	case 6:
		str = "�׸�...";
		break;
	case 7:
		str = "�׷��� ���ƿ�..";
		break;
	case 8:
		str = "����...";
		break;
	case 9:
		str = "����ּ���...";
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

/*�ڻ� ����*/
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
	cout << "           ��� �Ϻη� �׷��ô°���...";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "   ��¥�� �����̴ϱ� ������ٰ� �׷��ô°���...";
	Sleep(2500); 

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "         ����� ���� ������ ����̱���...";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "          ����� ������ �����ϰھ��...";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	             (Ǫ��)";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	             SUICIDE";//�ڻ��� Ư�� ����
	cout << "	           ����° ���� : �ڻ�";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
}

/*��⺴ ����*/
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
	cout << "          (�Ƹ�Ÿ�Ͻ��� ���� ���� �� ����.)";
	Sleep(2500);

	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	cout << "        �Ƹ�Ÿ�Ͻ� : ���� �� ���� ��ٴ�!!";
	Sleep(2500);

	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	cout << " �Ƹ�Ÿ�Ͻ� : ���༮�� ���� ��⺴���� ������!!";
	Sleep(2500);

	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	cout << "           ���� ������ ������ �� �ӿ���" <<endl;
	cout << "         ����� �����͸� �ٶ󺸰� �־���.";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	       AM I REALY DIED?!?!?!?"<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "	        �׹�° ���� : ��⺴";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);

}

/*�л� ����*/
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
	cout << "                �������� �����̾���.";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	            YOU DIED" << endl;
	cout << "          õ���� ���� ���� ���� �����´�.";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	            YOU DIED" << endl;
	cout << "          �� ���� ���������°� ��������.";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	            YOU DIED" << endl;
	cout << "               �ټ���° ���� : �л�";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
	Sleep(2500);
}

/* ��� ���� : Ż��*/
void Display::Ending6()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	cout << "	               End"<<endl;
	cout << "           �ָ��� ���� ���̱� �����Ѵ�.";
	Sleep(2500);

	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	cout << "	               End"<<endl;
	cout << "      ���� �ڵ� ���ƺ��� �ʰ� ������ �޷�����.";
	Sleep(2500);

	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	cout << "	               End"<<endl;
	cout <<"                   ������ ������"<< endl;
	cout <<"      ����������� ��� ǥ������ ���� ��������.";
	Sleep(2500);

	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	cout << "	               End"<<endl;
	cout << "             ������ �������� �� ����"<< endl;
	cout << "          �������� �ٽ� ���� �� �־���.";
	Sleep(2500);

	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "	             The End ?";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
}