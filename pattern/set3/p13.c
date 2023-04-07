#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    char E = 'E';
    for(i=n;i>=1;i--)
    {
        char c = E;
        for(j=1;j<=i;j++)
        {
            printf("%c ",c--);
        }printf("\n");E--;
    }return 0;
}