#include<stdio.h>
#include<stdlib.h>

int ex9_2()
{
	/* �ŧi���ctriangle�����A�A�H�����B��l" . "�s�����c���� */
	struct triangle
	{
		float length, height;	/* �T���Ϊ����P�� */
		double area;		 /* �T���Ϊ����n */
	};
	struct triangle tri;
	printf("�п�J�T���Ϊ���: ");
	scanf("%f", &tri.length);	/* �Htri.length�s�����c����length */
	printf("�п�J�T���Ϊ���: ");
	scanf("%f", &tri.height);	/* �Htri.height�s�����c����height */
	tri.area = tri.length*tri.height/2.0; /*�Htri.area �s�����c����area*/
	printf("�T���Ϊ����n��: %.2lf\n", tri.area);
	return 0;
}