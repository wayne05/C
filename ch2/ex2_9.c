#include <stdio.h>
#include <stdlib.h>

ex2_9(void)
{
	int a, b;
	char oper;
	printf("Please ��J�[��: ");    scanf("%d", &a);
	printf("Please ��J�Q�[��: ");  scanf("%d", &b);
	printf("Please ��J�B��Ÿ� +,-,*,/: ");  scanf(" %c", &oper);

	switch (oper)
	{
	case '+':
		printf("%d+%d=%d\n", a, b, a + b);    /* �L�Xa+b */
		break;
	case '-':
		printf("%d-%d=%d\n", a, b, a - b);    /* �L�Xa-b */
		break;
	case '*':
		printf("%d*%d=%d\n", a, b, a*b);      /* �L�Xa*b */
		break;
	case '/':
		printf("%d/%d=%d\n", a, b, a / b);  /* �L�Xa%b */
		break;
	default:
		printf("input error!!\n");            /* �L�X�r�� */
	}
}