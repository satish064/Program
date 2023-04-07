#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int n = 1;
        char c = 'A';
        for(j=1;j<=i;j++)
        {
          if(i % 2 == 0)
          printf("%d ",n++);
          else 
          printf("%c ",c++);
        } printf("\n");
    }return 0;
}
