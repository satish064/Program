#include<stdio.h>
int proDigits(int);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    proDigits(n);
    return 0;
}
int proDigits(int n)
{
    int r,d,pro=1;
    while (n>0)//12
    {
        r = n % 10;//2
        pro = pro * r;//6
        n /= 10;
    }
    printf("%d",pro);
}
