#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    int x = 1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
          printf("%d ",x++);
        } printf("\n");
    }return 0;
}
