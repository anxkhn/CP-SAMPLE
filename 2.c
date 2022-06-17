#include <conio.h>
#include <stdio.h>

void main()
{
	int a, b, c;
	printf("Enter the three numbers \n");
	scanf("%d \n %d \n %d", &a, &b, &c);
	if (a > b)
		if (a > c)
			printf("%d is maximum", a);
		else
		{
			printf(" \n %d is maximum", c);
		}
	else
	if (b > c)
		printf("\n %d is maximum", b);
	else
		printf("\n %d is maximum", c);
}
