#include <stdio.h>
void main()
{
    char a[100], b[100];
    int i, l1 = 0, l2 = 0;

    printf("Enter two strings:\n");
    gets(a);
    gets(b);
    while (a[l1] != '\0')
    {
        l1++;
    }
    while (b[l2] != '\0')
    {
        l2++;
    }

    if (a[i] > b[i])
    {
        printf("%s string is greater", a);
    }
    else if (a[i] < b[i])
    {
        printf("%s string is greater", b);
    }
    else
    {
        printf("The strings %s and %s are equal", a, b);
    }
}