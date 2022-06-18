#include <stdio.h>

void main()
{
	int a, rem, sum, x;
	for(a=100;a<=999;a++)
	{
		x=a;
		sum=0;
		while(x>0)
		{
			rem=x%10;
			sum=sum+rem*rem*rem;
			x=x/10;
		}
		if(sum==a)
			printf("\n%d", a);
	}
}
