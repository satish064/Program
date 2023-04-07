#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    char A = 'A';
    for(i=n;i>=1;i--)
    {
        char c = A;
        for(j=1;j<=i;j++)
        {
            printf("%c ",c++);
        }printf("\n");A++;
    }return 0;
}