#include<stdio.h>
int main()
{
    int n,i,j,m;
    printf("Enter a row: ");
    scanf("%d",&n);
    printf("Enter a column: ");
    scanf("%d",&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(j==1 || i==1 || i==n || j==m)
            printf("*");
            else
            printf(" ");
        }printf("\n");
    }return 0;
}