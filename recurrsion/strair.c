#include<stdio.h>
int stair(int n);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d",stair(n));
    return 0;
}
int stair(int n)
{
    if(n==0||n==1 || n==3)
    return 1;
    return stair(n-1)+stair(n-2)+stair(n-3);
}