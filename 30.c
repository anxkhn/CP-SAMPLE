#include <stdio.h>
void main()
{
    char a[100], b[100];
    int i=0, l1 = 0, l2 = 0;

    printf("Enter two strings:\n");
    gets(a);
    gets(b);
    while (a[i] != '\0')
    {
        l1++;
        i++;
    }
    i = 0;
    while (b[i] != '\0')
    {
        l2++;
        i++;
    }
    if ( l1 > l2 )
    {
        printf("%s string is greater", a);
    }
    else if (l1 < l2)
    {
        printf("%s string is greater", b);
    }
    else
    {
        printf("The strings %s and %s are equal", a, b);
    }
}
