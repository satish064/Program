#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int c = 65;
        for(j=1;j<=n-i;j++)
        printf(" ");
        for(k=1;k<=i;k++)
        printf("%c",c++);
        printf("\n");
    }return 0;
}