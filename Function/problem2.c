#include<stdio.h>
int isPrime(int n);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(isPrime(n))
    printf("Number is Prime");
    else
    printf("Number is not prime");
    return 0;
}
int isPrime(int n)
{
   int fac = 0;
   for(int i = 1;i<=n;i++)
   {
    if(n % i == 0)
    {
        fac++;
    }
   }
   if(fac == 2)
   return 1;
   else
   return 0;
}