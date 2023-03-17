#include<stdio.h>
int perfectNum(int);
int  main()
{
    int i;
    for(i = 1;i<=10000;i++)
    {
        if(perfectNum(i))
        printf("%d\n",i);
    }
    return 0;
}
int perfectNum(int n)
{
    int i,s=0;
    for(i = 1;i<=n/2;i++)
    {
        if(n % i == 0)
        s += i;
    }
    if(n == s)
    return n;
    else
    return 0;
}