#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int s=97,c=65;
       for(j=1;j<=n;j++)
       {
        if(i % 2 == 0)
        printf("%c ",c++);
        else
        printf("%c ",s++);
       }printf("\n");
    }
    return 0;
}