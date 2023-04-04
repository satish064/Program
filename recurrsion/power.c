#include<stdio.h>
int power(int n,int p)
{
    /*int s = 1;
    for(int i=1;i<=p;i++)
    {
        s *= n;
    }
    return s;*/
    if(p == 0)
    return 1;
    return n*power(n,p-1);
}
int main()
{
    int a,b;
    printf("Enter base case and power: ");
    scanf("%d%d",&a,&b);
    printf("%d resied to the power %d is %d",a,b,power(a,b));
    return 0;
}