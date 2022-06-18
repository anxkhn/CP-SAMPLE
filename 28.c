#include<stdio.h>

int main()
{
    char string[100];
    int length=0, flag=1,i;

    printf("Enter string:\n");
    scanf("%s", &string);

    for(i=0;string[i]!='\0';i++)
    {
        length++;
    }

    for(i=0;i< length/2;i++)
    {
        if( string[i] != string[length-i-1] )
        {
            flag=0;
            break;
        }
    }

    if(flag==1)
    {
        printf("entered string is a palindrome");
    }
    else
    {
        printf("entered string isn't a palindrome");
    }
    return 0;
}
