#include <stdio.h>
#include <stdlib.h>


ex3_1(void)
{
	int a = 3, b = 3;
	printf("a=%d", a);
	printf(", a++ return value%d", a++); /* �p��a++�A�æL�X��Ǧ^�� */
	printf(", a=%d\n", a);
	printf("b=%d", b);
	printf(", ++b return value%d", ++b); /* �p��++b�A�æL�X��Ǧ^�� */
	printf(", b=%d\n", b);

	//system("pause");
	//return 0;
}