#include<stdio.h>
int fac(int);
int main()
{
    int n=5;
    printf("%d",fac(n));
    // printf("Enter a number: ");
    // scanf("%d",&n);
    // printf("Fatorial is:%d",fac(n));
    return 0;
}
int fac(int n)//4
{
    if(n==1 )//t
    return 1;
    int factorial = n*fac(n-1);
    return factorial;//4*1(1-1)=4
}