#include <stdio.h>
#include <stdlib.h>
ex5_1(void)
{
	int i, j, sale[2][4], sum = 0;

	for (i = 0; i<2; i++)
		for (j = 0; j < 4; j++)
		{
			printf("sale%d %d quarter results:", i + 1, j + 1);
			scanf("%d", &sale[i][j]);     /*��J�P��q*/
		}
	printf("***Output***");
	for (i = 0; i < 2; i++)   /*��X�P��q�íp���`�P�q*/
	{
		printf("\nsale%d quarter results:", i + 1);
		for (j = 0; j < 4; j++)
		{
			printf("%d ", sale[i][j]);
			sum += sale[i][j];
		}

	}
	printf("\n");
	printf("\2015 results for the total sales volume of %d cars \n", sum);


}