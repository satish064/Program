#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int A = 1;
        for(j=1;j<=n-i;j++)
        printf(" ");
        for(k=1;k<=i;k++)
        {
            if(k % 2 == 0)
            printf("*");
            else
            printf("%d",A);
            A++;
        }
        printf("\n");
    }return 0;
}