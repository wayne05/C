#include <stdio.h>
#include <stdlib.h>
#include"c.h"


void main()
{
	int input;
	_Bool flag = 1;
	while (flag)
	{
		printf("1.  #define �d��\n");
		printf("2.  �����ܼƪ��ϥνd��\n");
		printf("3.  �����ܼƩҦ����줸��\n");
		printf("4.  �����ܼƪ��m��\n");
		printf("5.  ����Ы��V���~�����A��\n");
		printf("6.  �ǻ����Ш���\n");
		printf("7.  �ܼƭȪ�����(�@)\n");
		printf("8.  �ܼƭȪ�����(�G)\n");
		printf("9.  �Ǧ^�h�ӼƭȪ����\n");
		printf("10. �}�C�W�٪��ȧY�}�C����}\n");
		printf("11. ���Ъ���ƹB��\n");
		printf("------------------\n");
		printf("�п�J�n���檺�d��?�@1~11�A ��'0'�Y�i��������!  ?");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ex7_1();
			break;
		case 2:
			ex7_2();
			break;
		case 3:
			ex7_3();
			break;
		case 4:
			ex7_4();
			break;
		case 5:
			ex7_5();
			break;
		case 6:
			ex7_6();
			break;
		case 7:
			ex7_7();
			break;
		case 8:
			ex7_8();
			break;
		case 9:
			ex7_9();
			break;
		case 10:
			ex7_10();
			break;
		case 11:
			ex7_11();
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