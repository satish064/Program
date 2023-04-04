#include<stdio.h>
int fac(int n)
{
    // 0 1 1 2 3 5 8 13 21 34 55
    int f1=0 ,f2=1,sum = 0,i=1;
   /* do
    {
        printf("%d\t",f1);  
        sum = f1 + f2;
        f1 = f2;
        f2 = sum;
        i++;
    }while(i<=n);*/
    if(n==1||n==0)
    return 1;
    return fac(n-1)+fac(n-2);

}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d",fac(n));
    return 0;
}