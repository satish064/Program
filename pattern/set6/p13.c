#include<stdio.h>
int main()
{
    int n,i,j,num = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      for(j=1;j<=n-i;j++)
      printf(" ");
      int s = num;
      for(int x = 1;x<=i;x++)
      printf("%d",s--);
      int z = 1;
      for(int l=1;l<i;l++)
      printf("%d",z++);
      printf("\n");num++;
    }return 0;
}