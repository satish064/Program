#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        char s = 'a';
        char c = 'A';
        for(j=1;j<=i;j++)
        {
          if(i % 2 == 0)
          printf("%c ",c++);
          else
          printf("%C ",s++);
        } printf("\n");
    }return 0;
}
