#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int ex9_4()
{

	struct square
	{
		float length;	
		double area;		 
	};
	struct square squ;
	printf("�п�J����Ϊ����: ");
	scanf("%f", &squ.length);	
	squ.area = pow(squ.length,2);
	printf("����Ϊ����n��: %.2lf\n", squ.area);
	return 0;
}