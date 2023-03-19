#include<stdio.h>
void decreasing(int n);
int main()
{
    int a,b;
    printf("Enter a number : ");
    scanf("%d",&a);
    decreasing(a);
    return 0;
}
void decreasing(int n)
{
    if(n==0)
    return;
    printf("%d\n",n);
    return decreasing(n-1);
}