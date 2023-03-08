/* Program to find the sum of digit of any number */
/*using function with arguments and return value */
#include<stdio.h>
int countDigit(int n);
int main(void)
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int count = countDigit(n);
    printf("%d sum of digits",count);
    return 0;
}
int countDigit(int n)
{
    int count = 0,i,d,sum = 0;
    do//125
    {
        sum += n % 10;
        n /= 10;//12
    }while(n>0);  //12<0  
    return sum;
}