#include<stdio.h>
void main(){
    int a[100][100],i,j,r,c,sum;
    float avg;
    printf("Enter the rows: ");
    scanf("%d",&r);
    printf("Enter the columns: ");
    scanf("%d",&c);

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter the element: ");
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum=sum+a[i][j];
      }
  }
    avg=sum/(r*c);
    printf("The sum of elements is %d\n",sum);
    printf("The average of elements is %f",avg);
}
