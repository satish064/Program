#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        char c = 'A';
        for(j=0;j<=n-i;j++)
        {
            if(i % 2 == 0)
            printf("* ");
            else
            printf("%c ",c++);
        }printf("\n");
    }return 0;
}