#include<stdio.h>
int ProperDSum(int);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("The sum of the Proper Division is %d",ProperDSum(n));
    return 0;
}
int ProperDSum(int n)
{
    int i,sum = 0;;
    for(i = 1;i<=n/2;i++)
        if(n % i == 0 )
            sum += i;
    return sum;
}
