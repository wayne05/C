/* ex7-2a.c*/
#include <stdio.h>
#include <stdlib.h>

ex4_3(void)
{
	/* ��J10�Ӿ�Ʀs�J�}�C�A�A�q�}�CŪ�X */
	int num[10], i;
	for (i = 0; i < 10; i++)
	{
		printf("�п�Jnum[%d]�����: ", i);
		scanf("%d", &num[i]);
	}
	printf("\n���}�C���U�C����:\n");
	for (i = 0; i < 10; i++)
		printf("num[%d]=%d\n", i, num[i]);
}