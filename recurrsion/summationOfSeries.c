/*intput = 5
  output = 1 + 2 + 3 + 4 + 5 = 15;
*/
#include<stdio.h>
int rseries(int);
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  printf("\b= %d",rseries(n));
  return 0;
}
int rseries(int n)//5 + 10 = 15
{
  int sum = 0;
  if(n==0)
    return 0;
    printf(" %d +",n);
    sum = n+rseries(n-1);
  //1 + 2 + 3 + 4 + 5 = 15
  return sum;
}