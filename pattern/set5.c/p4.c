#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter a number: ");
    scanf("%d",&n);int num = 5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        printf(" ");
        for(k=1;k<=i;k++)
        printf("%d ",num);
        printf("\n");num--;
    }return 0;
}