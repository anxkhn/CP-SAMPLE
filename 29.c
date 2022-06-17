#include<stdio.h>
void main()
{
    char a[100];
    int i,v=0,l,c;

    printf("Enter the string: ");
    gets(a);
    l=0;
    while(a[l]!='\0')
    {    l++;}

    for(i=0;i<l;i++){
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
        v++;
    }
    c=l-v;
    printf("The string has %d vowels and %d consonants.",v,c);
}
