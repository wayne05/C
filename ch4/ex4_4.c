#include <stdio.h>
#include <stdlib.h>
ex4_4(void)
{
	/*��X�}�C�C�@��������m*/
	int num[10], i;
	for (i = 0; i < 10; i++)
	{
		printf("&num[%d]=%p,num+%d=%p\n", i, &num[i], i, num + i);
	}
}