#include<stdio.h>
int fibo(int n){
    int a=0,b=1,c;
    if (n==1 || n==0)
    return 1;
    else
    c=a+b;
    while(c<=n){
        a=b;
        b=c;
        c=a+b;
        if(c==n)
        return 1;
    }
    return 2;    
  //HERE THERE IS NO SPECIFIC NEED TO CONSIDER 1 AND 2 U CAN USE SOMETING ELSE ALSO THEY ARE JUST VALUES.
}
void main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if (fibo(n)==1)
    printf("The number is a part of fibonacci series.");
    else
    printf("The number is not a part of fibonacci series.");
}
