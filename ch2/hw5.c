#include <stdio.h>
#include <stdlib.h>
hw5(void)
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
	if (sum > 12 || money >= 700 || x >= 10)
		money *= 0.95;
	printf("�`�@%d�M\n", sum);
	printf("�`���B�O%d��\n", money);
}