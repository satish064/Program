#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        int m = 2*i-1;
        for(k=1;k<=m;k++)
        printf("%d",i);
        printf("\n");
    }return 0;
}