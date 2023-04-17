#include<stdio.h>
#define SIZE 50
int i;
void arrayInput(int arr[],int size);
void arrayOutput(int arr[],int size);
int main()
{
int arr[SIZE],n;
printf("Enter array size :\n");
scanf("%d",&n);
arrayInput(arr,n);
 int temp,count = 0;
    for(i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            count++;
        }
    }printf("NO of count %d",count);
arrayOutput(arr,7);
return 0;
}
void arrayInput(int arr[],int size)
{
    printf("Enter the array elements : \n");
    for(i=0;i<size-1;i++)
    scanf("%d",&arr[i]);
}
void arrayOutput(int arr[],int size)
{
    for(i=0;i<size-1;i++)
    printf("%d",arr[i]);
}
void arrayAdjacentCompare(int arr[],int size)
{
    int temp,count = 0;
    for(i=0;i<size-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            count++;
        }
    }printf("NO of count %d",count);
}