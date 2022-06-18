#include<stdio.h>
int fact(int n)
{
    int i,f=1;
    for(i=2;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
void main()
{
    int n,r,ncr;
    printf("Enter the value of n and r: ");
    scanf("%d%d",&n,&r);
    ncr=fact(n)/(fact(r)*fact(n-r));
    printf("hello");
    printf("the value of ncr is %d",ncr);
}
