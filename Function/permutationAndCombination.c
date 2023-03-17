#include<stdio.h>
int combination(int n,int r);
int permutation(int n,int r);
int main()
{
    int n,r;
    printf("Enter the n and r : ");
    scanf("%d%d",&n,&r);
    printf("%d permutaion \n",permutation(n,r));
    printf("%d combinations\n ",combination(n,r));
    return 0;

}
int permutation(int n,int r)
{
    int i,pro=1,pro2=1,com;//5
    for(i = 1;i<=n;i++)//5<=5
    {
        pro*=i;
    }
    com = n -r;
    for(i = 1;i<=com;i++)//5<=5
    {
        pro2*=i;
    }
    return pro/pro2;
}
/*nCr = n! ⁄  r! (n-r)! ,0 < r ≤n*/
int combination(int n,int r)
{ 
    int i,pro = 1,pro1 = 1,pro2 = 1;
    for(i=1;i<=n;i++)
    pro*=i;
    for(i=1;i<=r;i++)
    pro1*=i;
    r = n-r;
    for(i=1;i<=r;i++)
    pro2*=i;
    return (pro/(pro1*pro2));

}