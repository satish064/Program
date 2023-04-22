#include<stdio.h>
int i;
void Double(int *a,int size)
{
   for(i=0;i<size;i++)
   *(a+i) = (*(a+i))*(*(a+i));
}
int main()
{
   int arr[] = {1,2,3,4,5};
   int size = sizeof(arr)/sizeof(arr[0]);
   Double(arr,size);
   for(i=0;i<size;i++)
   printf("%d ",arr[i]);
   return 0;
}