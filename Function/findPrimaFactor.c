#include<stdio.h>
/*eg.56
Output:2,2,2,7
*/
int primeFactor(int);
int main()
{
    int n;
    printf("Enter the numeber: ");
    scanf("%d",&n);
    primeFactor(n);
    return 0;
}
int primeFactor(int n)
{
   for(int i = 2;n!=1;i++)
   while(n%i==0)
   {
        printf("%d ",i);
    n/=i;
   }
}
