#include<stdio.h>
int main()
{
    int n,i,j,c=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=n-i;j++)
        {
            if(c % 2 == 0)
            printf("0 ");
            else
            printf("1 ");
            c++;
        }printf("\n");
    }return 0;
}