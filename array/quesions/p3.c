/* Binary Search */
#include<stdio.h>
#define MAX 50
int BinarySearch(int arr[],int size,int item);
int main()
{
    int i,size,arr[MAX],item,index;
    printf("Enter the number of elements : ");
    scanf("%d",&size);
    printf("Enter the elemetns(in sorted order) : \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",arr[i]);
    }
    printf("Enter the item to be searched : ");
    scanf("%d",&item);
    index = BinarySearch(arr,size,item);
    if(index == -1)
    printf("%d not found in array\n",item);
    else
    printf("%d found at position %d\n",item,index);
    return 0;
}
int BinarySearch(int arr[],int size,int item)
{
    int low=0,high=size-1,mid;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(arr[mid]<item)
        {
            high = mid - 1;
        }
        else if(arr[mid]>item)
        {
            low = mid + 1;
        }
        else
            return mid;
    }
    return -1;
}