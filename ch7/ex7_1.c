#include<stdio.h>
#include<stdlib.h>

#define	SIZE 8
#define MSG "�w����{"
#define ONE 1
#define TWO ONE+ONE
#define PI  3.14159
#define BEGIN {
#define END }
#define TAB "\t"
#define ABS(n) (n>0)? n : -n
#define EVEN(n) (n%2==0)? "�_��" : "����"
#define MAX(x,y) ((x>y)? x:y)
#define MIN(x,y) ((x<y)? x:y)

void ex7_1()
BEGIN
int num1, num2;
printf("�п�J��Ӿ��:");
scanf("%d %d",&num1,&num2);
printf("%d �M %d �����j�ȬO: %d\n", num1, num2, MAX(num1,num2));
END