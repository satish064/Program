/* Program to convert a decimal number to binary number */
#include<stdio.h>
int main()
{
    int arr[15],i,j,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=0;num>0;i++)
    {
        arr[i] = num % 2;
        num/=2;
    }
    printf("Binary number is : ");
    for(j=i-1;j>=0;j--)
        printf("%d",arr[j]);
        return 0;
}