#include <stdio.h>

void main()
{
	int n, i, a[100];
	printf("Enter a number :\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Enter the value \n");
		scanf("%d", &a[i]);
	}
	int max = a[0];
	{
		for (i = 0; i < n; i++)
		{
			if (a[i] > max)
			{
				max = a[i];
			}
		}
		printf("the largest value is %d", max);
	}
}
