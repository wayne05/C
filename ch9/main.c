#include <stdio.h>
#include <stdlib.h>
#include"c.h"


void main()
{
	int input;
	_Bool flag = 1;
	while (flag)
	{
		printf("1.  ���c�骺����\n");
		printf("2.  ���c�骺�����s��\n");
		printf("3.  ���c�ܼƪ���l��\n");
		printf("4.  �m��(�@)\n");
		printf("5.  �m��(�G)\n");
		printf("6.  ���c�P����\n");
		printf("7.  ���c�����ܼƧ@����k�ǻ����޼�\n");
		printf("8.  \n");
		printf("9.  \n");
		printf("10. \n");

		printf("------------------\n");
		printf("�п�J�n���檺�d��?�@1~10�A ��'0'�Y�i��������!  ? ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ex9_1();
			break;
		case 2:
			ex9_2();
			break;
		case 3:
			ex9_3();
			break;
		case 4:
			ex9_4();
			break;
		case 5:
			ex9_5();
			break;
		case 6:
			ex9_6();
			break;
		case 7:
			ex9_7();
			break;
		/*case 8:
			ex9_8();
			break;
		case 9:
			ex9_9();
			break;
		case 10:
			ex9_10();
			break;*/
		default:
			printf("��J���A�d��\n");
			flag = 0;
			break;
		}

		system("pause");
		system("cls");
	}
}