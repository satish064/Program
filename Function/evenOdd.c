/*Program to find the number is prime or not*/
#include<stdio.h>
int evenOdd(int n);
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    evenOdd(n);
    return 0;
}
int evenOdd(int n)
{   
    if(n%2==0)
    printf("%d is even",n);
    else
    printf("%d is odd",n);
}