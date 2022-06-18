#include <stdio.h>

void main()
{
	int c = 5, sum = 0;
	while (c *(c + 1) < 400)
	{
		sum = sum + c;
		c = c + 1;
	}
	printf("Sum = %d", sum);
}
