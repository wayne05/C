#include<stdio.h>
#include<stdlib.h>

#define	SIZE 8
#define MSG "歡迎光臨"
#define ONE 1
#define TWO ONE+ONE
#define PI  3.14159
#define BEGIN {
#define END }
#define TAB "\t"
#define ABS(n) (n>0)? n : -n
#define EVEN(n) (n%2==0)? "奇數" : "偶數"
#define MAX(x,y) ((x>y)? x:y)
#define MIN(x,y) ((x<y)? x:y)

void ex7_1()
BEGIN
int num1, num2;
printf("請輸入兩個整數:");
scanf("%d %d",&num1,&num2);
printf("%d 和 %d 的較大值是: %d\n", num1, num2, MAX(num1,num2));
END