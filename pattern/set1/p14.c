#include<stdio.h>
int main()
{
    int n,i,j,k=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=n;j++)
       {
        printf("%3d",k++);
       }printf("\n");
    }
    return 0;
}