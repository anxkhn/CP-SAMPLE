#include <stdio.h>
#include <math.h>

void main()
{
    int a, b, c;
	float area, s;
    printf("Enter the side lengths: ");
    scanf("%d %d %d",&a,&b,&c);
	s = (a + b + c) / 2;
	area = sqrt(s *(s - a) *(s - b) *(s - c));
	printf("Area is %.2f", area);
}
