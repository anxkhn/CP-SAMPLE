#include <stdio.h>


void value_swap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void reference_swap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void main()
{
	int x, y;
	printf("Enter x and y ");
	scanf("%d%d", &x, &y);
	printf("Calling by value, i.e. the original value of the variables won't change");
	printf("\nNumbers before swapping x = %d and y = %d.", x, y);
	value_swap(x, y);
	printf("\nNumbers after swapping x = %d and y = %d.", x, y);
	printf("\nCalling by reference, i.e. the original value of the variables will change");
	printf("\nNumbers before swapping x = %d and y = %d.", x, y);
	reference_swap(&x, &y);
	printf("\nNumbers after swapping x = %d and y = %d.", x, y);

}

