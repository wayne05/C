#include <stdio.h>
#include <stdlib.h>
hw4(void)
{
	int x, y, sum, money;
	printf("�w����{\n");
	printf("�ï]���� 45��;�Q�s���K 55��\n");
	printf("�аݫȤH�U�ݭn�X�M\n");
	printf("�ï]����=");
	scanf("%d", &x);
	printf("�Q�s���K=");
	scanf("%d", &y);
	sum = x + y;
	money = x * 45 + y * 55;
	if (sum > 15 && money >= 800)
		money *= 0.9;
	printf("�`�@%d�M\n", sum);
	printf("�`���B�O%d��\n", money);
}