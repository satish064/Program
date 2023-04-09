#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        printf(" ");
        l = 2*i-1;
        int s = l;
        for(k=1;k<=s;k++)
        printf("%d",l--);
        printf("\n");
    }
    return 0;
}