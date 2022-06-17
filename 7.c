#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
	int n,m,k,i, flag;
	printf("enter the integer \t");
	scanf("%d", &n);
	if (n % 2 == 0)
		printf("\n number is even");
	else
		printf("\n number is odd");
	k = sqrt(n);
	if (k *k == n)
		printf("\n number is perfect square");
	else
		printf("\n number is not perfect square");
	m = n / 2;
	for (i = 2; i <= m; i++)
	{
		if (n % i == 0)
		{
			printf("\n Number is not prime");
			flag = 1;
			break;
		}
	}

	if (flag == 0)
		printf("\n Number is prime");
}
