#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int k = 2*i-1;
        for(j=1;j<=i;j++)
        {
          printf("%d ",k--);
        } printf("\n");
    }return 0;
}
