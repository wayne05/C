#include <stdio.h>
#include <stdlib.h>
void ex8_7()
{
	char x = 'a'; //�w�q�ܼ� x
	char *p1 = &x; //�w�q�����ܼ�
	char **p2 = &p1; //�w�q���������ܼ�
	printf("&x=%p, x=%c\n", &x, x); /* �L�Xx�ܼƪ���}�P�� */
	printf("&p1=%p\, p1=%p\n", &p1, p1); /* �L�Xp1�����ܼƦ�} */
	printf("&p2=%p\, p2=%p\n", &p2, p2); /* �L�Xp2�����ܼƦ�} */
	printf("*p1=%p\, **p2=%p\n", *p1, **p2); /* �L�Xp1�����ܼƪ��ȻPp2�����ܼƪ��� */
	printf("p1�� %d bytes\, p2�� %d bytes\n", sizeof(p1), sizeof(p2)); /* �L�Xp1�Pp2�����ܼƦ��h��bytes��} */
	return 0;
}