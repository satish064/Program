#include<stdio.h>
int main()
{
    int n,i,j,k,l=5;
    printf("Enter a number: ");
    scanf("%d",&n);int num = 1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        printf("  ");
        for(k=1;k<=i;k++)
        printf("%3d ",num++);
        printf("\n");
    }return 0;
}