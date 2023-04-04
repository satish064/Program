#include<stdio.h>
int main()
{
    int n,i,j,k=64,x;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=k+i;
        for(j=1;j<=n;j++)
        {
            printf("%c ",x++);
        }printf("\n");
    }
    return 0;
}