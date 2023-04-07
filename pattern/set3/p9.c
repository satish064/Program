#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    char A = 'A';
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",A);
        }printf("\n");A++;
    }return 0;
}