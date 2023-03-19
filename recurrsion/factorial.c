#include<stdio.h>
int fac(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Fatorial is:%d",fac(n));
    return 0;
}
int fac(int n)//4
{
    if(n==1 || n==0)//t
    return 1;
    return n*fac(n-1);//4*1(1-1)=4
}