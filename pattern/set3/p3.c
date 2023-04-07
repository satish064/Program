#include<stdio.h>
int main()
{
    int n,i,j,k=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",k);
        }printf("\n");k++;
    }return 0;
}