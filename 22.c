#include<stdio.h>
int summation(int x[],int y[],int z[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+x[i]*y[i]*z[i];
    }
    return sum;
}
void main()
{
    int i,n,x[100],y[100],z[100],result;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter x%d,y%d and z%d: ",i+1,i+1,i+1);
        scanf("%d%d%d",&x[i],&y[i],&z[i]);
    }
    result=summation(x,x,y,n)+summation(x,y,y,n)+summation(x,y,z,n);
    printf("the solution of equation is %d",result);
    
}
