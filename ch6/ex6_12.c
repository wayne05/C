#include<stdio.h>
#include<stdlib.h>

int number;  /* number�O�@�ӥ����ܼ� */
void output_2(); /* output( )���쫬�ŧi */

int ex6_12()
{
	printf("Printf input a number: ");
	scanf("%d", &number);
	output_2();
	return 0;
}

/*  �w�qoutput() */
void output_2()
{
	printf("Number is %d\n", number);
}