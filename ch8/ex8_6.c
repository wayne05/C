#include <stdio.h>
#include <stdlib.h>
int ex8_6()
{
	double d;
	double *p = &d;
	double **pp = &p;
	printf("�п�J�@double ��: ");
	scanf("%lf", &d);
	printf("d=%.2lf, *p=%.2lf, and **pp=%.2lf\n", d, *p, **pp);
	return 0;
}