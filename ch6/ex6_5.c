#include <stdio.h>
#include <stdlib.h>
void test(void);  /* test( )���쫬�ŧi */
int ex6_5()
{
	printf("���{���b���� return ���@��\n");
	printf("���ն}�l!!\n");
	test();  /* �I�stest( ) */
	printf("���յ���!!\n");
	return 0;
}
/* test( )���w�q */
/* �Q��for�j�����return; ���ĤO */
void test(void)
{
	int i, a, b;
	for (i = 1; i <= 10; i++)/*�|����10����for�j
							 ��*/
	{
		printf("�п�J a �M b: ");
		scanf("%d %d", &a, &b);
		if (b == 0)
			return;  /*��b=0�ɡA����return;*/
		else
			printf("%d/%d=%d\n", a, b, a / b);
		printf("for �j��]�F %d ��\n\n", i);
	}
}

