#include <stdio.h>
#include <stdlib.h>
ex2_10(void)
{
	int i = 1, sum = 0; /* �]�w�j���� */
	while (i <= 100) /* while�j��A��sum�p��100�h�~��֥[ */
	{
		sum += i;
		printf(" From 1 to accumulate %2d=%2d\n", i, sum);
		i++;
	}
	printf(" It must be added to the %d\n", i - 1);
}