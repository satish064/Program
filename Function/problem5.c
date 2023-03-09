/* WAP Function converts a decimal number to binary number*/
#include<stdio.h>
//long int decimalToBinary(int n);
long int decimalToBinary(int n)
{
    int bin=0,a=1,rem;
    while (n>0)
    {
        rem = n % 2;
        bin = bin + rem * a;
        n /= 2;
        a*=10;
    }
    return bin;
}
int main()
{
    int d,num;
    printf("Enter the number: ");
    scanf("%d",&d);
    printf("Binary to of the %d",decimalToBinary(d));
    return 0;
}