#include<stdio.h>
#include<stdlib.h>

int gcd(int m, int n);
int m, n;
int hw1(void)
{
	printf("�п�J���:");
	scanf("%d %d", &m, &n);
	gcd(m, n);
	printf("Gcd�G%d\n", gcd(m, n));
}

int gcd(int m, int n)
{

	if (n == 0)
	{
		return m;
	}
	else
	{
		int r = m % n;
		m = n;
		n = r;
		gcd(m, n);
	}
}