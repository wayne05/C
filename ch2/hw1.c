

#include <stdio.h>
#include <stdlib.h>


hw1(void)
{
	int x, y;
	printf("�п�J�@�Ӿ��=");
	scanf("%d", &x);
	y = x % 2;
	if (y == 1)
	{
		printf("%d�O�_��\n", x);
	}
	else if (y == 0)
	{
		printf("%d�O����\n", x);
	}
}