#include<stdio.h>
void bubblesort(int arr[],int size);
int main()
{
    int arr[50],i,j,n;
    printf("Enter the array size :\n");
    scanf("%d",&n);
    printf("Enter the array :\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    bubblesort(arr,n);
    for(i=0;i<n;i++)
    printf("%d\n",arr[i]);
    return 0;
}
void bubblesort(int arr[],int size)
{
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}