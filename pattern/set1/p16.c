#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int x = 1;
       for(j=1;j<=n;j++)
       {
        if(i%2==0)
        printf("%d ",x++);
        else
        printf("* ");
       }printf("\n");
    }
    return 0;
}