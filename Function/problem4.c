/* Write a function that inputs two numbers and printf all prime numbers between those numbers */
#include<stdio.h>
#include<math.h>
int isPrime(int n);
int  printPrime(int n,int m);
int main()
{
    int n,i;
    printf("Enter two number : ");
    scanf("%d%d",&i,&n);
    printPrime(i,n);
    return 0;
}
int  printPrime(int k,int m)
{
    int i;
 for(i=k;i<=m;i++)
        if(isPrime(i))
        printf("%d is Prime\t",i);
}
int isPrime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    if(n % i == 0)
    count++;

    if(count == 2)
    return 1;
    return 0;
}