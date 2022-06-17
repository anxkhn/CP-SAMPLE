#include <conio.h>
#include <stdio.h>

void main()
{
	int number = 100, digit1, digit2, digit3, t;
	while (number <= 999)
	{
		digit1 = number - ((number / 10) *10);
		digit2 = (number / 10) - ((number / 100) *10);
		digit3 = (number / 100) - ((number / 1000) *100);
		t = (digit1 *digit1 *digit1) + (digit2 *digit2 *digit2) + (digit3 *digit3 *digit3);
		if (t == number)
		{
			printf("%d \n", t);
		}

		number++;
	}
}
