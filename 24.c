#include<stdio.h>
void ascend(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<=n-2;i++)
    {
        for(j=0;j<=n-2;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nThe elements of array in ascending order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
}
void descend(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<=n-2;i++)
    {
        for(j=0;j<=n-2;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nThe elements of array in descending order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void search(int a[],int n)
{
    int i,number;
    printf("enter the number you want to search: ");
    scanf("%d",&number);
    for(i=0;i<n;i++)
    {
        if(a[i]==number)
        {
            printf("\nThe number %d is present in array",number);
        }
    }
    if(i==n)
    {
        printf("\nThe number %d is not present in array",number);
    }
    
}
void delete(int a[],int n)
{
    int i,pos;
    printf("enter the position of number in array you want to delete:");
    //Note:the position is with respect to array means first element of array have position 0,2nd have position 1 and so on
    scanf("%d",&pos);
    if(pos>n)
    {
        printf("\nInvalid input");
    }
    else
    {
        for(i=pos;i<n;i++)
        {
            a[i]=a[i+1];
        }
        printf("\nafter deleting\n");
        for(i=0;i<n-1;i++)
        {
            printf("%d\t",a[i]);
        }
    }
}
void insert(int a[],int n)
{
    int i,number,pos;
    printf("\nenter the number you want to insert and at what position you  want to insert in array: ");
    //Note:the position is with respect to array means first element of array have position 0,2nd have position 1 and so on
    scanf("%d%d",&number,&pos);
    if(pos>n)
    {
        printf("\nInvalid input");
    }
    else
    {
        for(i=n;i>=pos;i--)
        {
            a[i]=a[i-1];
        }
        a[pos]=number;
        printf("\nAfter insertion in array\n");
        for(i=0;i<=n;i++)
        {
            printf("%d\t",a[i]);
        }
    }
}
void main()
{
    int a[100],choice,i,j,n,temp,d;
    do{
    printf("enter the number of element you want to stored in array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nenter the element: ");
        scanf("%d",&a[i]);
    } 
    printf("\n1.ascending\n2.descending\n3.search\n4.delete\n5.insert\n");
    printf("\nenter the choice of operation: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: 
        ascend(a,n);
        break;
        case 2:
        descend(a,n);
        break;
        case 3:
        search(a,n);
        break;
        case 4:delete(a,n);
        break;
        case 5:insert(a,n);
        break;
        default:
        printf("\ninvalid input");
        break;
    }
    printf("\ndo you want to continue");
    printf("\n1.yes\n2.no\nenter the choice");
    scanf("%d",&d);
    }while(d==1);
}
