#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int num = 1;
       for(j=1;j<=n;j++)
       {
        if(j % 2 == 0)
        printf("* ");
        else
        printf("%d ",num);
        num++;
       }printf("\n");
    }
    return 0;
}