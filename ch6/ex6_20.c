/* ex6-6b.c */
#include <stdio.h>
#include <stdlib.h>
void increase_3();
int ex6_20()
{
	/* ����static�x�s���O���ͩR�g�� */
	int count;
	printf("Testing storage class << static >>\n");
	/* �ϥ�for�j��I�sincrease( ) */
	for (count = 1; count <= 5; count++)
	{
		printf("#%d call: ", count);
		increase_3();
	}
	printf("Testing end!!\n");
	return 0;
}
/* �w�qincrease( )��ơAsi�x�s���O��static�A��X�֥[�����G */
void increase_3(void)
{
	static int si = 100; /* �w�qsi��static�x�s���O�A��Ȭ�100 */
	printf("si = %d\n", ++si);
}
