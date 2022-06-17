#include<stdio.h>
struct student
{
    char name[30];
    int rollno,physics,chemistry,maths,total;
};
void main()
{
    struct student a[100],temp;
    int n,i,j;
    printf("enter the no of students data to be stored");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nenter the name,roll no,physics,chemistry,maths marks: ");
        scanf("%s%d%d%d%d",a[i].name,&a[i].rollno,&a[i].physics,&a[i].chemistry,&a[i].maths);
        a[i].total=a[i].physics+a[i].chemistry+a[i].maths;
    }
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-2;j++)
        {
          if(a[j].total<a[j+1].total)
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
        }  
    }
    
    printf("\nname\trollno\tphy\tchem\tmaths\ttotal\n");
    printf("-------------------------------------------------------\n");

    for(i=0;i<n;i++)
    {
        printf("%s\t%d\t%d\t%d\t%d\t%d\n",a[i].name,a[i].rollno,a[i].physics,a[i].chemistry,a[i].maths,a[i].total);
    }
}
