#include <stdio.h>
#include <stdlib.h>

int swap(int, int); /* swap()��ƪ��쫬 */

int ex7_7() {
	int a = 5, b = 20;
	printf("Before swap...");
	printf("a=%d,b=%d\n", a, b);
	printf("%p\n", &a);
	printf("%p\n", &b);

	
	swap(a, b);
	printf("After swap...");
	printf("a=%d,b=%d\n", a, b);
	return 0;
}


int swap(int x, int y) /* �w�qswap()��� */
{
	int temp = x;
	x = y;
	y = temp;
	printf("%p\n", &x);
	printf("%p\n", &y);
	printf("%d\n", x);
	printf("%d\n", y);
}