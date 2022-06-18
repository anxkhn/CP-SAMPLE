#include <stdio.h>
void main()
{
	int i, n, count;
	for (n = 75; n <= 150; n++)
	{
		count = 0;
		for (i = 2; i <= n / 2; i++)
		{
			if (n % i == 0)
			{
				count++;
				break;
			}
		}
		if (count == 0 && n != 1)
		{
			printf("%d ", n);
		}
	}
}

/* ALTERNATIVE approach

#include <stdio.h>
#include <conio.h>

int main()
{
	int n,i,count;
	for (n = 75; n <= 150; n++)
	{
        count=0;
	for(i=2;i<=n;i++)
        { 
            if(n%i==0)
            count++;
        }
        if(count==1)
        {
            printf("%d ",n);
        }
	}

} 

*/
