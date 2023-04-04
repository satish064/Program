#include<stdio.h>
int main()
{
    int n,i,j,k=65;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c ",k);
        }printf("\n");
        k++;
    }
return 0;
}