#include<stdio.h>
#include<stdlib.h>
void output_1();
void dash();

int ex6_2()
{
	printf("�I�soutput���!!\n");
	dash();
	output_1();
	dash();
	printf("�I�s�����Aover!!\n");
	return 0;
}
/*  output()��ƪ��w�q  */
void output_1()
{
	printf("�ڳ��wiPhone 6s\n");
	printf("�ڤ]���w Apple watch\n");
}

void dash()
{
	int i;
	for (i = 1; i <= 50; i++)
	{
		printf("-");
	}
	printf("\n");
}