#include <stdio.h>
#include <stdlib.h>

ex3_2(void)
{
	int num1, num2, larger;
	printf("Please input two integers: :\n");
	printf("Please first  integers: :"); scanf("%d", &num1);
	printf("Please second integers: :"); scanf("%d", &num2);

	num1>num2 ? (larger = num1) : (larger = num2); /* ����B��l */
	printf("%d greater value \n", larger);

	//system("pause");
	//return 0;
}