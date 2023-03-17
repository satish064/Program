#include<stdio.h>
int long table(int);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    table(n);
    return 0;
}
int long table(int n)
{
    for(int i = 1;i<=10;i++)
    {
        printf("%3d * %2d = %3d\n",n,i,n*i);
    }
}