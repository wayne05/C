#include <stdio.h>
#include <stdlib.h>
int acc();
int count;
int hw7(void)
{
	printf("��J0�ɵ����A��J1�ɥ[1\n");
	do
	{
		scanf("%d", &count);
		if (count == 1)
			acc();
		else
		{
			printf("�����{��\n");
			system("exit");
		}
	} while (count == 1);
	return 0;
}
int acc()
{
	static int si=1 ;
	printf("�ثe�����s���H�� = %d\n", si++);
	return 0;
}
