#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter a row : ");
    scanf("%d",&r);
    printf("Enter a column: ");
    scanf("%d",&c);
    int a[r][c],b[r][c],d[r][c];
    printf("Enter the 1st matrix element: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the 2nd matrix element: ");
      for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Subtract martix is:\n ");
      for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            d[i][j] = a[i][j] + b[i][j];
            printf("%d ",d[i][j]);
        }printf("\n");
    }return 0;
}
