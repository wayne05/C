/* ex6-2a.c */
#include <stdio.h>
#include <stdlib.h>
int square();  /* square( )���쫬�ŧi */
int ex6_4()
{
	int ans;
	printf("�p��Y�@��ƪ�����\n\n");
	ans = square();   /* ��ans����square()���Ǧ^�� */
	printf("��������O %d\n", ans);
	system("PAUSE");
	return 0;
}
/* �w�qsquare()�A��ƫ��A��int */
/* �n�D��J�@�ơA�ñN���ƥ����Ǧ^ */
int square()
{
	int num, total;
	printf("�п�J�@���: ");
	scanf("%d", &num);
	total = num*num;
	return  total; /* �Ntotal�Ǧ^�I�s��� */
}
