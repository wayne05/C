#include <stdio.h>
#include <stdlib.h>
#include"c.h"

void ex5_1();
void ex5_2();
void ex5_3();
void ex5_4();
void ex5_5();
void ex5_6();
void ex5_7();
void ex5_8();
void ex5_9();
void ex5_10();


void main()
{
	int input;
	_Bool flag = 1;
	while (flag)
	{
		printf("1.�G���}�C�������s��\n");
		printf("2.���G���}�C���-�ҤT��(�C����)�A�@�ѦҤT��(�����)\n");
		printf("3.�֤@�Ӥ�����0\n");
		printf("4.�t�@�ؤ֤@�Ӥ�����0\n");
		printf("5.����\n");
		printf("6.�m���D�@\n");
		printf("7.�T���}�C�����Ρг̤j�P�̤p��\n");
		printf("8.��w�ƧǪk\n");
		printf("9.�G���j�M�k\n");
		printf("10.�m���D�G\n");
		printf("------------------\n");
		printf("�п�J�n���檺�d��?�@1~10�A ��'0'�Y�i��������!  ?");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ex5_1();
			break;
		case 2:
			ex5_2();
			break;
		case 3:
			ex5_3();
			break;
		case 4:
			ex5_4();
			break;
		case 5:
			ex5_5();
			break;
		case 6:
			ex5_6();
			break;
		case 7:
			ex5_7();
			break;
		case 8:
			ex5_8();
			break;
		case 9:
			ex5_9();
			break;
		case 10:
			ex5_10();
			break;
		default:
			printf("��J���A�d��\n");
			flag = 0;
			break;
		}

		system("pause");
		system("cls");
	}
}