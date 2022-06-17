#include <stdio.h>
#include <conio.h>

void main()
{
	int d, n, sum = 0;
	printf("Enter a number  \n");
	scanf("%d", &n);
	while (n > 0)
	{
		d = n % 10;
		sum = sum + d;
		n = n / 10;
	}

	printf("Sum of the digit = %d", sum);
}
