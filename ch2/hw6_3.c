#include<stdio.h>
#include<stdlib.h>
void hw6_3(void)
{
	int a, b, c;
	printf("�п�J�P�P���:");
	scanf("%d", &a);
	for (b = 1; b <= a; b++)
	{
		for (c = a; c >= b; c--)
		{
			printf("*");
		}
		printf("\n");
	}
}