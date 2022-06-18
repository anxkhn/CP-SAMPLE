#include <stdio.h>

void main()
{
    int i;
    char a[100];
    printf("Enter the string: ");
    gets(a);
    int l=0;
    while (a[l]!='\0')
    {
        l++;
    }
    printf("The length of string is %d",l);
    for(i=0; i<=(l-1)/2;i++)
    {
        if (a[l-i-1]!=a[i])
            break;
    }
    if(i==((l-1)/2)+1)
        printf("\nThe string is plaindrome.");
    else
        printf("\nThe string is not palindrome.");
}
