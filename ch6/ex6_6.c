#include<stdio.h>
#include<stdlib.h>

float Area();
int  ex6_6()
{
	float area;
	printf("�п�J���M�e\n");
	area = Area();
	printf("���n��: %f \n", area);
	return 0;
}


float Area()
{
	float i, j;
	printf("�п�J��: ");
	scanf("%f",&i);
	printf("�п�J�e: ");
	scanf("%f",&j);
	return(i*j);
}