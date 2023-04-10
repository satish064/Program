#include<stdio.h>
void inputMat(int ar[][10]);
int row,column;
int main()
{
    int i,j,count=0;
    float sum=0;
    printf("Enter a row: ");
    scanf("%d",&row);
    printf("Enter a column: ");
    scanf("%d",&column);
    int arr[row][column];
    inputMat(arr);
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(j==i)
            {
                count++;
                sum +=arr[i][j];
            }
        }
    }
    float ave = sum/count;
    printf("Average is %f",ave);
    return 0;
}
void inputMat(int ar[][10])
{
    int i,j;
    printf("Enter a 2D martrix: ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
}