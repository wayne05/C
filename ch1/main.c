#include <stdio.h>
#include <stdlib.h>
#include "c.h"

void ex1_1();
void ex1_2();
void ex1_3();
void ex1_4();
void hw1();
void hw2();
void hw3();
void hw4();

void main() {

	int input;
	_Bool flag = 1;

	while (flag) {
		printf("1. �Ĥ@��C�{���y��\n");
		printf("2. �{���϶��P���骺�d��\n");
		printf("3. �����X��쪺�e��\n");
		printf("4. ��J���scanf()\n");
		printf("5.hw1:�ЦC�L�X 'Hello Every One, Welcome to the C World!'\n");
		printf("6.hw2:�]x1=a, x2=b, x3=n�Х�x1, x2, x3�C�L�Xbanana\n");
		printf("7.hw3:�йB��for�j��, �p��1+3+5+�K+99\n");
		printf("8.hw4:�йB��for�j��, �p��1^2+2^2+3^2+�K+10^2\n");
		printf("----------------------------------------------------\n");
		printf("�п�J�n���檺�d��?  1~8 �A��'0' �h��������!   ?    ");
		scanf("%d", &input);


		switch (input)
		{
		case 1:
			ex1_1();
			break;
		case 2:
			ex1_2();
			break;
		case 3:
			ex1_3();
			break;
		case 4:
			ex1_4();
			break;
		case 5:
			hw1();
			break;
		case 6:
			hw2();
			break;
		case 7:
			hw3();
			break;
		case 8:
			hw4();
			break;
		case 0:
			flag = 0;
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