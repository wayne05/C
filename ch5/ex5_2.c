#include <stdio.h>
#include <stdlib.h>
ex5_2(void)
{
	/*���G���}�C���-�ҤT��(�C�W��)�A�@�ѦҤT��(�����)*/
	int score[3][3] = { { 74,72,63 },{ 83,91,74 },{ 84,82,65 } }; //{74,72,63,83,92,74,84,82,65};
	int index1, index2, total = 0; /*�~�鱱��Ҹդ��*/
	for (index1 = 0; index1 < 3; index1++)
	{
		printf("\n�� %d �Ѫ����Ƥ��O���G", index1 + 1);
		for (index2 = 0; index2 < 3; index2++)
		{
			printf("%3d", score[index1][index2]);
			total += score[index1][index2];
		}
	}
	printf("\n\n�`��: %d\n", total);
	printf("��������: %.2f\n", total / 9.0);
}