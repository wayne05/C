#include <stdio.h>
#include <stdlib.h>
hw6(void)
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%d*%d=%-3d", i, j, i*j);
		}
		printf("\n");
	}
}