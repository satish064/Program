#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=69;
        for(j=1;j<=n;j++)
        {
            printf("%c ",k--);
        }printf("\n");
    }
    return 0;
}