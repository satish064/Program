#include<stdio.h>
int sumDigit(int long);
int main()
{
    int long n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%ld",sumDigit(n));
    return 0;
}
int sumDigit(int long n)//45329
{
    if(n<=0)
    return 0;
    int sum = 0,d;
    d =  n % 10;//9
    n/=10;
    sum = d+sumDigit(n);
    return sum;
}