#include<stdio.h>
int amicableNum(int);
int main()
{
    int i,j;
    for(i = 1;i<=1000;i++)
    {
        for(j = 1;j<=1000;j++)
        if(i!=0 && amicableNum(i) == j && amicableNum(j) == i)
        printf("%d %d",i,j);
    }
    return 0;
}
int amicableNum(int n)
{
    int i,sum = 0;
    for(i = 1;i<=n/2;i++)
    {
        if(n % i == 0)
        sum += i;
    }
    return sum;
}