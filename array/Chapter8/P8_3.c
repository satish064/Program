/* Program to count even and odd numbers in an array*/
#include<stdio.h>
#define SIZE 10
int main()
{
    int arr[SIZE],i,even=0,odd=0;
    for(i=0;i<SIZE;i++)
    {
        printf("Enter a value of array[%d] : ",i);
        scanf("%d",&arr[i]);
        if(arr[i] % 2 ==0 )
        even++;
        else
        odd++;
    }
    printf("Even numbers=%d, Odd number=%d\n",even,odd);
    return 0;
}