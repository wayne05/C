#include<stdio.h>
#include<stdlib.h>

void ex7_10() 
{
	int i, a[5] = { 32,16,35,65,52 };
	printf("a=%p\n", a);
	printf("&a=%p\n", &a);

	for (i = 0; i < 5; i++)
		printf("&a[%d]=%p\n", i, &a[i]);
}