#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    int x = n/2+1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(x==j || x==i)
            printf("*");
            else
            printf("#");
        }printf("\n");
    }
    return 0;
}