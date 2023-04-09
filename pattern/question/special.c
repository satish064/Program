#include<stdio.h>
int main()
{
   int n,i,j,min,a,b;
   printf("Eneter a number: ");
   scanf("%d",&n);
   for(i=1;i<=2*n-1;i++)
   {
      min = 0;
      for(j=1;j<=2*n-1;j++)
      {
         a = i;
         if(i>n) a = 2*n - i;
         b = j;
         if(j>n) b = 2*n - j;
         if(a<b) min = a;
         else min = b;
         printf("%d",n+1-min);
      } printf("\n");
   }return 0;
}