#include <stdio.h>
#include <stdlib.h>

ex3_7(void) {
	int i, j, n = 6;             /* �]�w�j���� */
	for (i = 1; i <= n; i++)     /* �~�h�j��M�w���@�C�n�L�P�� */
	{
		for (j = 1; j <= i; j++) /* ���h�j��L�X*�P�� */
			printf("*");
		printf("\n");
	}
}