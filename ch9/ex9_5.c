#include<stdio.h>
#include<stdlib.h>

void ex9_5()
{
	struct data
	{
		char name[20];	
		int score;				
	};
	struct data num= {"������", 100 };
	
	printf("�ǥͩm�W: %s\n",num.name);
	printf("�ǥͦ��Z: %d\n",num.score);


}