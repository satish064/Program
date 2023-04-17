/* Addition of two matrices */
#include<stdio.h>
#define ROW 3
#define COL 4
int main()
{
    int mat1[ROW][COL],mat2[ROW][COL],mat3[ROW][COL],i,j,sum = 0;
    printf("Enter matrix 1(%dx%d) row-wise :\n",ROW,COL);
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        scanf("%d",&mat1[i][j]);
    }
    printf("Enter martix 2(%dx%d) row-wise :\n",ROW,COL);
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        scanf("%d",&mat2[i][j]);
    }
    printf("Resultent matrix is:\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
        mat3[i][j] = mat1[i][j] + mat2[i][j];
        printf("%3d",mat3[i][j]);
        }printf("\n");
    }
    return 0;
}