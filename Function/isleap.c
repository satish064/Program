#include<stdio.h>
int isLeap(int n);
int main()
{
    int n;
    printf("Enter the year for checking the year is leap or not: ");
    scanf("%d",&n);
    printf("%d",isLeap(n));
    return 0;
}
int isLeap(int n)
{
    if(n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
    return 1;
    else 
    return 0;
}