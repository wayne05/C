#include <stdio.h>
#include <stdlib.h>
#include"c.h"


void main()
{
	int input;
	_Bool flag = 1;
	while (flag)
	{
		printf("1.  ���Ұ}�C�W�٬O�@�ӫ��б`��\n");
		printf("2.  �Q�Ϋ��Цs���}�C�����e\n");
		printf("3.  ���������ܼƪ��d��\n");
		printf("4.  �T�������ܼƪ��d��\n");
		printf("5.  ex: �����ܼ� ����(�@)\n");
		printf("6.  ex: �����ܼ� ����(�G)\n");
		printf("7.  ex: �ק�Ĥ@�D�A�çP�_���������ܼƦ��h��byte\n");
		printf("8.  ���а}�C�P�G���}�C(�@)\n");
		printf("9.  ���а}�C�P�G���}�C(�G)\n");
		printf("10. hw\n");

		printf("------------------\n");
		printf("�п�J�n���檺�d��?�@1~10�A ��'0'�Y�i��������!  ?");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ex8_1();
			break;
		case 2:
			ex8_2();
			break;
		case 3:
			ex8_3();
			break;
		case 4:
			ex8_4();
			break;
		case 5:
			ex8_5();
			break;
		case 6:
			ex8_6();
			break;
		case 7:
			ex8_7();
			break;
		case 8:
			ex8_8();
			break;
		case 9:
			ex8_9();
			break;
		case 10:
			ex8_10();
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