#include<stdio.h>
#include<stdlib.h>

double squAdd_1(double, double,double);
void printstar_2();

int ex6_11()
{
	double num1, num2,num3, sum;
	int i;
	printf("���{���b�p��T�B�I�ƪ��ߤ�M\n\n");
	printf("�п�J�T�ӯB�I��:\n ");
	scanf("%lf %lf %lf", &num1, &num2, &num3);
	printf("�п�J�n�L�X���P�P��: ");
	scanf("%d", &i);
	sum = squAdd_1(num1, num2, num3);
	printstar_2(i);
	printf("%lf ���ߤ� + %lf ���ߤ� + %lf ���ߤ謰:  %lf\n", num1, num2,num3, sum);
	printstar_2(i);
	return 0;
}


double squAdd_1(double a, double b,double c)
{
	double ans;
	ans = a*a*a + b*b*b + c*c*c;
	return ans;
}

void printstar_2(i)
{
	int j;
	for (j = 1; j <= i; j++)
		printf("*");
	printf("\n");
}