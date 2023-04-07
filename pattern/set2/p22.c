#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        char c = 'A';
        int x = 1;
        for(j=1;j<=i;j++)
        {
          if(j % 2 == 0)
          printf("%d ",x);
          else
          printf("%c ",c);
          x++;c++;
        } printf("\n");
    }return 0;
}
