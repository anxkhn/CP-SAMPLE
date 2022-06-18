#include <stdio.h>

void main()
{
	int i, j, n;
	printf("Enter n = ");
	scanf("%d", &n);
	int a[n];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int max = a[0];
	for (i = 0; i < n; i++)
	{
		if (a[i] > max)
		{	
			printf("Enter elements  \n");
			max = a[i];
		}
	}
}
