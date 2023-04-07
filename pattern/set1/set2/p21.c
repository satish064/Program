#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int x = 1;
        for(j=1;j<=i;j++)
        {
          if(j % 2 == 0)
          printf("* ");
          else
          printf("%d ",x);x++;
        } printf("\n");
    }return 0;
}
