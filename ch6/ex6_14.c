#include<stdio.h>
#include<stdlib.h>

int number = 100;  /* �w�q�����ܼ� */
void output_4();

int ex6_14()
{
	/* ���ը�Ʀb�ϰ��ܼƻP�����ܼƶ������� */
	printf("number is %d\n", number);
	output_4();
	return 0;
}

void output_4()
{
	int number = 200;  /* �w�q�ϰ��ܼ� */

	printf("number is %d\n", number);
}