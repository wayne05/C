#include<stdio.h>
#include<stdlib.h>

double absolute ();
int ex6_7()
{
	double num;
	num=absolute();
	printf("��ƭȤ�����Ȭ�: %f\n",num);
	return 0;
}
double absolute()
{
	double num;
	printf("Please input a number: ");
	scanf("%lf", &num);
	return(num>0)?  num:-num;
}