#include<stdio.h>
#include<stdlib.h>

void input();
void output_3();

int ex6_13()
{
	printf("���{���b���ե����ܼ�\n");
	input();
	output_3();
	return 0;
}

int array[5];  /* �w�q�����ܼ�array�}�C*/

void input()
{
	int index;
	for (index = 0; index < 5; index++)
	{
		printf("�п�J #%d ��� ", index + 1);
		scanf("%d", &array[index]);
		/* �ϥΥ����ܼư���J */
	}
}

void output_3()
{
	int index;  /*�w�qoutput( )���ϰ��ܼ�*/
	printf("\n");
	for (index = 0; index < 5; index++)
		/* �ϥΥ����ܼư���X */
		printf("array[%d] is %d\n", index, array[index]);

}