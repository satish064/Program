#include<stdio.h>
#define SIZE 10
int main()
{
   int arr[10] = {1,2,3,4,5,6,7,8,9,10},i,j,temp;
   for(i=0,j=9;i<j;j--,i++)
   {
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
   }
   for(i=0;i<10;i++)
   printf("%d ",arr[i]);
   return 0;
}
