#include<stdio.h>
void selectionSort(int arr[],int size);
void arrayInput(int arr[],int size);
void arrayOutput(int arr[],int size);
#define SIZE 40
int main()
{
  int i,j,temp,arr[SIZE],n;
  printf("Enter array size : \n");
  scanf("%d",&n);
  arrayInput(arr,n);
  selectionSort(arr,n);
  arrayOutput(arr,n);
  return 0;
}
void arrayInput(int arr[],int size)
{
  int i;
  printf("Enter array elements :\n");
  for(i=0;i<size;i++)
  scanf("%d",&arr[i]);
}
void arrayOutput(int arr[],int size)
{
  int i;
  printf("Entered array is :\n");
  for(i=0;i<size;i++)
  printf("%d\t",arr[i]);
}
void selectionSort(int arr[],int size)
{
  int i,j,temp;
  for(i=0;i<size-1;i++)
  {
    for(j=i+1;j<size;j++)
    {
      if(arr[i]>arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}