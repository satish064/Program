#include<stdio.h>
int main(){
int n=4,i,j,k,l,m;
for(i=1;i<=n;i++)
{
   for(j=1;j<=n-i;j++)
   printf(" ");
   k = 2*i-1;
   for(l=1;l<=k;l++)
   printf("%d",i);
   printf("\n");
}
m = 3;
for(i=1;i<n;i++)
{
   int p = 2*m-1;
   for(j=1;j<=i;j++)
   printf(" ");
   for(k=1;k<=p;k++)
   printf("%d",m);
   printf("\n");m--;
}
return 0;
}