#include <stdio.h>
#include <stdlib.h>
ex2_5(void) {
	int score;
	printf(" Please input a score: ");
	scanf("%d", &score);
	if (score < 60) /* �p�Gscore<60 */
	{
		if (score >= 50) /* �p�Gscore>=50 */
			printf(" make up exams \n");
		else
			printf("Fail\n");
	}
	else
		printf("Pass\n");
}