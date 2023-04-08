#include<stdio.h>
int main()
{
    int n,i,j,k;
    char A = 'A';
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        char c = A;
        for(j=1;j<=n-i;j++)
        printf(" ");
        for(k=1;k<=i;k++)
        printf("%c",c++);
        printf("\n");A++;
    }return 0;
}