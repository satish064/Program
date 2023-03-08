/*Program to find out the factorial of the number*/
#include<stdio.h>
int fac(int n);
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    fac(n);
    return 0;
}
int fac(int n)
{
    int i,faco = 1;
    for(i=1;i<=n;i++){
        faco *= i;
    }
   printf("Factorial is = %d",faco);
}