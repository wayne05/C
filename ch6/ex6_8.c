#include<stdio.h>
#include<stdlib.h>
int square_1(int);  /* square( )���쫬�ŧi */

int ex6_8()
{
	int num, ans;
	printf("�p��Y�@��ƪ�����\n\n");
	printf("�п�J�@���: ");
	scanf("%d", &num);
	ans = square_1(num);  /* ��ans����square()���Ǧ^�� */
	printf("%d ������O%d\n", num, ans);
	return 0;
}
/* �w�qsquare()�A��ƫ��A��int */
/* �n�D��J�@�ơA�ñN���ƥ����Ǧ^ */
int square_1(n)
{
	int total;
	total = n*n;
	return total;   /* �Ntotal�Ǧ^�I�s��� */

}