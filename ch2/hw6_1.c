#include<stdio.h>
#include<stdlib.h>
void hw6_1(void)
{
	int a, b, c, d;
	printf("�п�J�P�P�����:");
	scanf("%d", &a);
	for (b = 1; b <= a; b++)
	{
		for (d = 1; d <= (a - b); d++)
		{
			printf(" ");
		}
		for (c = 1; c <= b; c++)
		{
			printf("*");
		}

		printf("\n");
	}
}