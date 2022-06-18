#include <stdio.h>

void swap(int, int);
void main()
{
	int x, y;
	printf("Enter x and y ");
	scanf("%d%d", &x, &y);
	printf("\nNumbers before swapping x = %d and y = %d.", x, y);
	swap(x, y);
}

void swap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("\nNumber after swapping x = %d and y = %d.", x, y);
}
