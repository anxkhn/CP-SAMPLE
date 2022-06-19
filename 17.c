#include <stdio.h>

int main()
{
	int i, j, m, n;
	float a[10][10], sum = 0.0, avg;
	printf("Enter row and column size:\n");
	scanf("%d%d", &m, &n);
	printf("Enter matrix elements:\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("a[%d][%d]=", i+1, j+1);
			scanf("%f", &a[i][j]);
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			sum = sum + a[i][j];
		}
	}
	avg = sum / (m*n);
	printf("Sum = %.4f\n", sum);
	printf("Average = %.4f", avg);

}
