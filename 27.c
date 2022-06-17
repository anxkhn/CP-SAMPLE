#include<stdio.h>
#include<string.h>
void main()
{
    char x,a[100],b[100],c[100];
    int l,k;

    printf("Enter string A: ");
    gets(a);
    printf("Enter string B: ");
    gets(b);

    //LENGTH
    l=strlen(a);
    k=strlen(b);
    printf("The lengths of A and B are %d and %d\n",l,k);

    //COMPARE ASCII VALUES
    if(strcmp(a,b)==0)
    printf("Strings are equal.\n");
    else if(strcmp(a,b)>0)
    printf("A is bigger.\n");
    else
    printf("B is greater.\n");
    
    //COPY COPIES A INTO C
    strcpy(c,a);
    printf("The new string C is %s\n",c);

    //CONCATNATE ADDS B INTO A
    strcat(a,b);
    printf("The concatnated string A and B is %s",a);

}
