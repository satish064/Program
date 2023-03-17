#include<stdio.h>
long combination(int,int);
long factorial(int);
int main()
{
        int n,i,j ;
        printf("Enter the number ");
        scanf("%d",&n);
        for(i = 0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
                printf("%5ld",combination(i,j));
            }printf("\n");
        }
}
int long combination(int n,int r)
{ 
    long com;
    com = factorial(n)/(factorial(r)*factorial(n-r));
    return com;
}
int long factorial(int n)
{
    long i,fac=1;
    if(n==0)
    return 1;
    else
    {
        for(i = 1;i<=n;i++)
        {
            fac*=i;
        }return fac;
    }
}