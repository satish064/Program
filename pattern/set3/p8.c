#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        char  A = 'A';
        for(j=1;j<=i;j++)
        {
            printf("%c ",A++);
        }printf("\n");
    }return 0;
}