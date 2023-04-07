#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter the row : ");
    scanf("%d",&r);
    printf("Enter the column: ");
    scanf("%d",&c);
    int a[r][c],b[r][c],d[r][c];
    printf("Enter the 1st matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the 2nd matrix: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Sum of the matrix: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            d[i][j] = a[i][j] + b[i][j];
            printf("%d ",d[i][j]);
        }printf("\n");
    }
    return 0;
}