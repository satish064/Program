#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=n-i;j++)
        {
            if(i % 2 == 0)
            printf("0 ");
            else
            printf("1 ");
        }printf("\n");
    }return 0;
}