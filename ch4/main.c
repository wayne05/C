#include <stdio.h>
#include <stdlib.h>
#include"c.h"

void ex4_1();
void ex4_2();
void ex4_3();
void ex4_4();
void ex4_5();
void ex4_6();
void ex4_7();
void ex4_8();


void main()
{
	int input;
	_Bool flag = 1;
	while (flag)
	{
		printf("1.do while�j��\n");
		printf("2.�}�C���d��\n");
		printf("3.��J10�Ӿ�Ʀs�J�}�C�A�A�q�}�CŪ�X\n");
		printf("4.��X�}�C�C�@��������}\n");
		printf("5.��X�}�C���Xbytes\n");
		printf("6.�}�C�����Ρг̤j�P�̤p��\n");
		printf("7.�}�C�ɽu���ˬd\n");
		printf("8.��ܰ}�C���Ц�m\n");
		printf("------------------\n");
		printf("�п�J�n���檺�d��?  1~8�A ��'0'�Y�i��������!  ?");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ex4_1();
			break;
		case 2:
			ex4_2();
			break;
		case 3:
			ex4_3();
			break;
		case 4:
			ex4_4();
			break;
		case 5:
			ex4_5();
			break;
		case 6:
			ex4_6();
			break;
		case 7:
			ex4_7();
			break;
		case 8:
			ex4_8();
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