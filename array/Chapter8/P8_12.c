/* Multiplicatin of two matrix */
#define COL 2
#define ROW 2
#include<stdio.h>
int main()
{
    int a[ROW][COL],b[ROW][COL],c[ROW][COL],i,j,k,sum = 0;
    printf("Enter the mat 1(%dx%d) row-wise : \n",ROW,COL);
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Enter the mat 2(%dx%d) row-wise : \n",ROW,COL);
      for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        scanf("%d",&b[i][j]);
    }
    printf("Matrix multiplication is: ");
      for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            c[i][j] = 0;
            for(k=0;k<ROW;k++)
            {
                c[i][j] += a[i][k]*b[k][j];
            }printf("%4d",c[i][j]);
        }printf("\n");
    }
    return 0;
}