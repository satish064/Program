#include<stdio.h>
int powlog(int n,int m);
int main()
{
   int n,m;
   printf("Enter a base number: ");
   scanf("%d",&n);
   printf("Enter the exponent : ");
   scanf("%d",&m);
   printf("%d to raise to the %d is %d",n,m,powlog(n,m));
   return 0;
}
int powlog(int n,int m)
{
    if(m==0)
    return 1;
    int x = powlog(n,m/2);
    if(m % 2 == 0)
    return x*x;
    else
    return x*x*n;
    
}