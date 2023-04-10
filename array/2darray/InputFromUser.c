#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter the row of the matrix: ");
    scanf("%d",&r);
    printf("Enter the colunm of the matrix: ");
    scanf("%d",&c);
    int matrix[r][c];
    printf("Enter the element of the martix:\n");
    for(i=0;i<r;i++)//2
    {
        for(j=0;j<c;j++)//4
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Elements of martix are: \n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",matrix[i][j]);
        }printf("\n");
    }
    return 0;
}