#include<stdio.h>
#include<stdio.h>
void main()
{
    int i,j,r;
    int a[100][100];
    printf("Enter the no of rows for square matrix(columns will be same):");
    scanf("%d",&r);

    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("enter the element:");
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nmatrix A is\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\nmatrix A after transpose\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
}
