#include<stdio.h>
int main()
{
    int n,i,j,k=65;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      int m = 2*i-1;
      int s = k;
      for(j=1;j<=n-i;j++)
      printf(" ");
      for(int x = 1;x<=m;x++)
      printf("%c",s--);
      printf("\n");
      k+=2;
    }return 0;
}