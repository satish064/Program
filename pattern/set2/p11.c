#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        char c = 'E';
        for(j=1;j<=i;j++)
        {
          printf("%c ",c--);
        } printf("\n");
    }return 0;
}
