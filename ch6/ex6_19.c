#include<stdio.h>
#include<stdlib.h>

void increase_2();

int ex6_19()
{
	/* ����auto�x�s���O���ͩR�g�� */
	int count;
	printf("Testing storage class << auto >> \n");
	/* �ϥ�for�j��I�sincrease( ) */
	for (count = 1; count <= 5; count++)
	{
		printf("# %d call: ", count);
		increase_2();
	}
	printf("Testing end!!\n");
	return 0;
}

/* �w�qincrease_2( )�Aai�x�s���O��auto�A��X�֥[�����G */
void increase_2()
{
	auto int ai = 100;   /* �w�qai��auto�x�s���O�A��Ȭ�100 */
	printf("ai=%d\n", ++ai);
}