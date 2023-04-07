#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        int k = i;
        for(j=1;j<=i;j++)
        {
            printf("%d ",k--);
        }printf("\n");
    }return 0;
}