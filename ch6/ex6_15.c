#include<stdio.h>
#include<stdlib.h>

int num;
void cube();

int ex6_15()
{
	printf("�п�J�@�N��T���誺��ƭ�: ");
	scanf("%d", &num);
	cube();
	return 0;
}

void cube()
{
	int sum;
	sum = num*num*num;
	printf("�T����᪺�Ȭ�: %d\n", sum);
	return 0;
}