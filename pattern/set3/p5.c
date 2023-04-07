#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    int k = 1;
    for(i=n;i>=1;i--)
    {
        int k = n;
        for(j=1;j<=i;j++)
        {
            printf("%d ",k--);
        }printf("\n");k++;
    }return 0;
}