#include <stdio.h>
#include <stdlib.h>
hw3(void)
{
	int i;
	printf(" �п�J1~4���ƭȽd�� ? �G"); scanf(" %d", &i);
	switch (i)
	{
	case 1:
		printf("%d:�K��\n,", i);
		break;
	case 2:
		printf("%d:�L��\n", i);
		break;
	case 3:
		printf("%d:���\n", i);
		break;
	case 4:
		printf("%d:�V��\n", i);
		break;
	default:
		printf("��J���~\n");
	}

}