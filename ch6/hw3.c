#include <stdio.h>
#include <stdlib.h>
int init();
int getans();
int compare();
int t, ans;
void hw3(void)
{
	init();
	getans();
	compare();
}
int init()
{
	printf("�w��Ө�q�Ʀr�C��!!\n");
	printf("�����D�]�w���� t= ");
	scanf("%d", &t);
}
int getans()
{
	printf("�п�J�z�n�q���Ʀr: ");
	scanf("%d", &ans);
	
}
int compare()
{
	if (ans == t)
		printf("���߲q��!!\n");
	else
		printf("�ܩ�p�A�q���F!!!\n");
}
