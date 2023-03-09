#include<stdio.h>
int binaryToOctal(int n);
int Decimal(int n);
int main()
{
    int n;
    printf("Enter the number(0,1) :");
    scanf("%d",&n);
    printf("Binary = %d Decimal = %d Octal = %d",n,Decimal(n),binaryToOctal(n));
    return 0;
}
int binaryToOctal(int n)
{
        int rem,octal=0,a=1;
        int m  = Decimal(n);
        while(m>0)//2
        {
            rem = m % 8;//2
            octal = octal + rem * a;//
            m /= 8;//0
            a*=10;//64
        }
        return octal;
}
int Decimal(int n)
{
    int a=1,bin=0,rem;
    while (n>0)
    {
        rem = n % 10;
        bin = bin + rem * a;
        n/=10;
        a*=2;
    }
    return bin;
}