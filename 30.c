#include <stdio.h>

int compareStrings(char* x, char* y)
{
    int flag = 0;
    while (*x != '\0') {
        if (*x == *y) {
            x++;
            y++;
        }else{
            flag = 1;
            break;
        }
    }
    return flag;
}
 
int main()
{
    char s1[100], s2[100];
    int i = 0, length1=0, length2=0;
    printf("Enter both the strings\n");
    scanf("%s%s", &s1, &s2);

    //calculating length
    while (s1[i] != '\0')
    {
        length1++;
        i++;
    }

    i=0;
    while (s2[i] != '\0')
    {
        length2++;
        i++;
    }

    //comparing length
    if ( length1 > length2 )
    {
        printf("%s is greater", s1);
    }
    else if (length1 < length2)
    {
        printf("%s is greater", s2);
    }
    else
    {
        //comparing equality of strings
        if(compareStrings(s1, s2)==0){
            printf("The strings are equal");
        }else{
            printf("Strings are of the same length but unequal");
        }
    }
    return 0;
}
