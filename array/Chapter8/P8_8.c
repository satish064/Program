/* Program to understand the effect of passing an array to a function*/
#include<stdio.h>
void func(int vau[]);
int main()
{
    int arr[] = {1,2,3,4,5,6},i;
    func(arr);
    printf("Contents of array are : ");
    for(i=0;i<6;i++)
    printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
void func(int vau[])
{
    int sum = 0,i;
    for(i=0;i<6;i++)
    {
    vau[i] *= vau[i];
    sum += vau[i];
    }
    printf("Sum of squares=%d\n",sum);
}