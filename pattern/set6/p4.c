#include<stdio.h>
int main()
{
    int n,i,j,k,m=5;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        printf(" ");
        int s = 2*i-1;
        for(k=1;k<=s;k++)
        printf("%d",m);
        printf("\n");m--;
    }
    return 0;
}