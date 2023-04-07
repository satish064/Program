#include<stdio.h>
int main()
{
    int n,i,j,count = 1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
          if(count % 2 == 0)
          printf("0");
          else
          printf("1");
          count++;
        } printf("\n");
    }return 0;
}
