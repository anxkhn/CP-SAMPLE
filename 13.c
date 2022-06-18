#include <stdio.h>

void main()
{
	int n, i, a[100], sum = 0;
	float avg;
	printf("Enter total number of integers ");
	scanf("%d", &n);
	for (i = 0; i <= n - 1; i++)
	{
		printf("Enter a value: ");
		scanf("%d", &a[i]);
	}
	for (i = 0; i <= n - 1; i++)
	{
		sum = sum + a[i];
	}
	avg = sum;
	avg = avg / n;
  printf("The sum of the numbers entered is %d", sum);
	printf("\nThe average of the numbers entered is %.4f", avg);
}
