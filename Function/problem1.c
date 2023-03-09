/* Reverse the number 
    eg. 3214 
    output: 4123
*/
#include<stdio.h>
int isPalindrome(int n);
int reverseNumber(int n);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(isPalindrome(n))
    printf("It is palindrome");
    else
    printf("It is not a palindrome");
    return 0;
}
int reverseNumber(int n)
{
    int d,num = 0;
    do
    {
        num = num * 10 + n % 10;
        n /= 10;
    } while (n>0);
    return num;
}
int isPalindrome(int n)
{
    if(reverseNumber(n)==n)
    return 1;
    else
    return 0;
}
