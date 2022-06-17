#include <stdio.h>

void main()
{
	int n, i, a[100], even=0, odd=0;
	printf("Enter total number of integers: ");
	scanf("%d", &n);
	for (i = 0; i <= n - 1; i++)
	{
		printf("Enter a value: ");
		scanf("%d", &a[i]);
		if (a[i]%2==0)
            even+=1;
        else
            odd+=1;
	}
	printf("The number of even integers entered are %d", even);
	printf("\nThe number of odd integers entered are %d", odd);
}
