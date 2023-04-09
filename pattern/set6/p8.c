#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        printf(" ");
        char A = 'A';
        k = 2*i-1;
        for(j=1;j<=k;j++)
        printf("%c",A++);
        printf("\n");
    }
    return 0;
}