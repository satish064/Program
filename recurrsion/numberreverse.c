#include<stdio.h>
int reverse(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);//56789 98765
    printf("Reverse no is %d",reverse(n));
    return 0;
}
int reverse(int n)
{
    int rem = 0,d=0;//12
   do  {
    rem = n%10;//32
    d = d * 10 +rem;//32
    n/=10;//1
   }while(n/10);
   
   return d;
}