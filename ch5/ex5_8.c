#include <stdio.h>
#include <stdlib.h>
ex5_8(void)
{
	int i, j, k, temp, size, flag;
	int arr[] = { 80,30,40,70,50,60 };
	size = sizeof(arr) / sizeof(int);
	printf(".....��ƱƧǫe.....\n");

	for (i = 0; i <= size - 1; i++)
		printf("%d ", arr[i]);
	printf("\n");

	for (i = 1; i <= 25; i++)
		printf("-");
	printf("\n");

	/**********��w�Ƨ�**********/
	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - i - 1; j++)
			if (arr[j] > arr[j + 1])
			{
				flag = 1;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		printf("#%d pass:", i + 1);
		for (k = 0; k < size; k++)
			printf("%d ", arr[k]);
		printf("\n");
		if (flag == 0)
			break;
	}
	/****************************/

	for (i = 1; i <= 25; i++)
		printf("-");
	printf("\n");
	printf(".....��w�Ƨǫ�.....\n");
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}