#include <stdio.h>
#include <stdlib.h>
hw2(void)
{
	int n, a, sum, b;
	do
	{
		printf("�п�J�@��\"������\"=");
		scanf("%d", &n);
		a = n % 2;
	} while (a != 0);
	b = n / 2;
	sum = (b*(2 + n)) / 2;
	printf("2+4+6+...+n=%d\n", sum);

}