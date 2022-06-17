#include<stdio.h>
int fact(int n){
    if(n==1)
    return 1;
    else 
    return n*fact(n-1); 
}
void main(){
    int n,r,ncr;
    printf("Enter N and R for nCr: ");
    scanf("%d%d",&n,&r);

    if(n<r)
    printf("ERROR!,R should be less than N");
    else{
        ncr=fact(n)/(fact(r)*fact(n-r));
        printf("The value of %dC%d is %d",n,r,ncr);
    }
}
