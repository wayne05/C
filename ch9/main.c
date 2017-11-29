#include <stdio.h>
#include <stdlib.h>
#include"c.h"


void main()
{
	int input;
	_Bool flag = 1;
	while (flag)
	{
		printf("1.  結構體的測試\n");
		printf("2.  結構體的成員存取\n");
		printf("3.  結構變數的初始化\n");
		printf("4.  練習(一)\n");
		printf("5.  練習(二)\n");
		printf("6.  結構與指標\n");
		printf("7.  結構指標變數作為方法傳遞的引數\n");
		printf("8.  \n");
		printf("9.  \n");
		printf("10. \n");

		printf("------------------\n");
		printf("請輸入要執行的範例?　1~10， 按'0'即可結束執行!  ? ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ex9_1();
			break;
		case 2:
			ex9_2();
			break;
		case 3:
			ex9_3();
			break;
		case 4:
			ex9_4();
			break;
		case 5:
			ex9_5();
			break;
		case 6:
			ex9_6();
			break;
		case 7:
			ex9_7();
			break;
		/*case 8:
			ex9_8();
			break;
		case 9:
			ex9_9();
			break;
		case 10:
			ex9_10();
			break;*/
		default:
			printf("輸入不再範圍內\n");
			flag = 0;
			break;
		}

		system("pause");
		system("cls");
	}
}