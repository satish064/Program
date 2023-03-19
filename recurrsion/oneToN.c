#include<stdio.h>
int oneToN(int x,int n);
int main()
{
    int n,x;
    printf("Enter a two number: ");
    scanf("%d%d",&x,&n);
    printf("%d",oneToN(x,n));
    return 0;
}
int oneToN(int x,int n)
{
    if(x>n)
    return;
    printf("%d\n",x);
    return (x+1,n);
}
