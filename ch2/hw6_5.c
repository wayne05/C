#include<stdio.h>
#include<stdlib.h>
void hw6_5(void)
{
	int a, b, c, d;
	printf("�п�J�P�P�����:");
	scanf("%d", &a);
	for (b = 0; b < a; b++)
	{
		for (d = 1; d <= (a - b); d++)
		{
			printf(" ");
		}
		for (c = 0; c <= (2 * b); c++)
		{
			printf("*");
		}
		printf("\n");
	}
}