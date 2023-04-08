#include<stdio.h>
int main()
{
    int n,i,j,k,l=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        printf(" ");
        for(k=1;k<=i;k++)
        {
            if(l % 2 == 0)
            printf("0");
            else
            printf("1");
            l++;
        }
        printf("\n");
    }return 0;
}