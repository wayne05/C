#include <stdio.h>
#include <stdlib.h>
#include "c.h"

void ex3_1();
void ex3_2();
void ex3_3();
void ex3_4();
void ex3_5();
void ex3_6();
void hw1();
void hw2();
void hw3();
void hw4();
void hw5();
void hw6();



void main() {

	int input;
	_Bool flag = 1;

	while (flag) {
		printf("1. ���W�P����B��l\n");
		printf("2. ����B��l���d��\n");
		printf("3. �_�� if �ԭz���m��\n");
		printf("4. switch �ԭz���d��\n");
		printf("5. while�j�骺�d��\n");
		printf("6. �H�_��while�j���g�E�E���k��\n");
		printf("7. �H�_���j��L�X�X��ϧ�\n");
		printf("8. �H�_���j��ϦL�Ʀr\n");
		printf("\n");
		printf("\n");
		printf("hw1.�էQ�α_���j�鼶�g�X�@�ӯಣ�ͦp�U�ϵ��G���{���C(9)\n");
		printf("    1\n");
		printf("    12\n");
		printf("    123\n");
		printf("    1234\n");
		printf("    12345\n");
		printf("hw2.�ЧQ��do while�j��A�p��2+4+6+...+n���`�M�A�䤤n���������ơA�i����L�ۦ��J�C\n");
		printf("    �Y��J�����O�����ơA�h�{���|�n�D�ϥΪ̦A����J�A�����J���ƬO�����Ƭ���C(10)\n");
		printf("hw3.�Х���L��J�ƭ�1~4�A�å[�H�P�_��J�ȬO�_�b1~4�����A�p�G�W�X���d��A�h�L�X\"��J���~\"�A \n");
		printf("    �_�h�Q��switch�L�X�۹������u�`�G(11)\n");
		printf("    1�G�K��\n");
		printf("    2�G�L��\n");
		printf("    3�G���\n");
		printf("    4�G�V��\n");
		printf("hw4.�ռ��g�@�{���A�Q��while�j��L�X5~20�����Ҧ���ƪ�����ȡA�̫�A�L�X�o�ǥ���Ȫ��`�M�C(12)\n");
		printf("hw5.�էQ��while�j���X�̤p��n�ȡA�ϱo1+2+3+...+n ���`�M�j�󵥩�1000�C(13)\n");
		printf("hw6.�էQ�α_��for�j��L�X�E�E���k��C(14)\n");
		printf("----------------------------------------------------\n");
		printf("�п�J�n���檺�d��? �@1~14�@�A ��'0' �h��������!   ?    ");
		scanf("%d", &input);


		switch (input)
		{
		case 1:
			ex3_1();
			break;
		case 2:
			ex3_2();
			break;
		case 3:
			ex3_3();
			break;

		case 4:
			ex3_4();
			break;

		case 5:
			ex3_5();
			break;

		case 6:
			ex3_6();
			break;

		case 7:
			ex3_7();
			break;

		case 8:
			ex3_8();
			break;
		case 9:
			hw1();
			break;
		case 10:
			hw2();
			break;
		case 11:
			hw3();
			break;

		case 12:
			hw4();
			break;

		case 13:
			hw5();
			break;

		case 14:
			hw6();
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