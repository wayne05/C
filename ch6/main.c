#include<stdio.h>
#include<stdlib.h>
#include"c.h"

void ex6_1();
void ex6_2();
void ex6_3();
void ex6_4();
void ex6_5();
void ex6_6();
void ex6_7();
void ex6_8();
void ex6_9();
void ex6_10();
void ex6_11();
void ex6_12();
void ex6_13();
void ex6_14();
void ex6_15();
void ex6_16();
void ex6_17();
void ex6_18();
void ex6_19();
void ex6_20();
void ex6_21();
void ex6_22();
void hw1();
void hw2();
void hw3();
void hw4();
void hw5();
void hw6();
void hw7();

void main()
{
	int  input;
	_Bool flag = 1;
	while (flag)
	{
		printf("1.   �I�sfunction  \n");
		printf("2.   �m���D1: ��g�d��function \n");
	    printf("3.   �m���D2: �w�q�@��� calculate(),�n�D�ϥΪ̿�J��Ƹ��,�A�P�_����ƬO�_�j��ε��� 60,�H�K�L�X ��pass�� �� ��down��\n");
		printf("4.   �Q�Ψ�ƭp��@��ƪ������\n");
		printf("5.   ���� return ���@�δ��ն}�l!! \n");
		printf("6.   �m���D3: �n�D�ϥΪ̿�J���M�e, �íp��䭱�n��^�ǵ��D�{�� \n");
		printf("7.   �m���D4: �w�q�@��ƭn�D�ϥΪ̿�J�@�ӭ�, �ñN�䵴��Ȧ^�ǫ��X \n");
		printf("8.   �d��function-3a\n");
		printf("9.   �Q�Ψ�ƿ�J�n�L�X���P�P \n");
		printf("10.  ��X8�M9���D\n");
		printf("11.  �m���D5: �ѷӽd��3��J�T�� double �B�I��, �p���ߤ�M�å[�H��X\n");
		printf("12.  �w�q�@�ӥ����ܼ�\n");
		printf("13.  ���ե����ܼ�\n");
		printf("14.  ���ը�Ʀb�ϰ��ܼƻP�����ܼƶ������� \n");
		printf("15.  �w�q�@�����ܼ� num, ��main ��Ƥ���J num ����, �A�I�s cube ��ƭp���T�����^��  \n");
		printf("16.  �w�q�@�����ܼ�, �éw�q�@ input ���, ���Ƥ���J���ܼƪ���, �A�^�� main ��ƿ�X  \n");
		printf("17.  ���^��ƹB��n!\n");
		printf("18.  �@���ƹB��n!\n");
		printf("19.  ����auto�x�s���O���ͩR�g��  \n");
		printf("20.  ����static�x�s���O���ͩR�g��  \n");
		printf("21.  ����register�x�s���O  \n");
		printf("22.  ����extern�x�s���O \n");
		printf("23.  HW1: ���j��ƨD��ƪ� gcd(�̤j���]��)\n");
		printf("24.  HW2: �D���j��ƨD��ƪ� gcd(�̤j���]��)\n");
		printf("25.  HW3: �]�p�@�q�Ʀr�C��, ���w�q init ��� t ���o����, �A�w�q getans ���, ���o�ϥΪ̿�J������,                                �̫�A�w�q compare ���, ������׬O�_���T\n");
		printf("26.  HW4: �ϩw�q�G�Ө��, �@���L�X�T�Ӿ�ƪ��̤j��, �G���L�X�T�Ӿ�ƪ��̤p��\n");
		printf("27.  HW5: �H���j��ư��椧,�O��ƦC���W�h���Y�@�����Ȭ���e�G�����M, ���] F0=1, F1=1,                                             �h�O��ƦC��: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...\n");
		printf("28.  HW6: �H�D���j��ư��椧,�O��ƦC���W�h���Y�@�����Ȭ���e�G�����M, ���] F0=1, F1=1,                                           �h�O��ƦC��: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...\n");
		printf("29.  HW7: �s���@������, �ҷ|���Ѩ�ثe��������Q�s�����H��, �եH static �x�s���O���Ƥ��]�p�@�p�ƾ�,                             �C��I�s�Ө��, �p�ƾ����ȳ��n�۰ʲ֥[, �̫��X�Ө�ƳQ�I�s������\n");
		printf("-----------------------------------------------------------------------------------------------------------------------\n");
		printf("�п�J�n���檺�d��?�@1~29�A ��'0'�Y�i��������!  ? ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ex6_1();
			break;
		case 2:
			ex6_2();
			break;
		case 3:
			ex6_3();
			break;
	    case 4:
			ex6_4();
			break;
		case 5:
			ex6_5();
			break;
		case 6:
			ex6_6();
			break;
		case 7:
			ex6_7();
			break;
		case 8:
			ex6_8();
			break;
		case 9:
			ex6_9();
			break;
		case 10:
			ex6_10();
			break;
		case 11:
			ex6_11();
			break;
		case 12:
			ex6_12();
			break;
		case 13:
			ex6_13();
			break;
		case 14:
			ex6_14();
			break;
		case 15:
			ex6_15();
			break;
		case 16:
			ex6_16();
			break;
		case 17:
			ex6_17();
			break;
		case 18:
			ex6_18();
			break;
		case 19:
			ex6_19();
			break;
		case 20:
			ex6_20();
			break;
		case 21:
			ex6_21();
			break;
		case 22:
			ex6_22();
			break;
		case 23:
			hw1();
			break;
		case 24:
			hw2();
			break;
		case 25:
			hw3();
			break;
		case 26:
			hw4();
			break;
		case 27:
			hw5();
			break;
		case 28:
			hw6();
			break;
		case 29:
			hw7();
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
