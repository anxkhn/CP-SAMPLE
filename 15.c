#include <stdio.h>

void main()
{
	int i, j, n;
	printf("Enter n = ");
	scanf("%d", &n);
	int a[n];
	for (i = 0; i < n; i++)
	{
		printf("\n Enter the elements: ");
		scanf("%d", &a[i]);
	}
	int max = a[0];
	for (i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	printf("\n the largest element in array is %d",max);
}
