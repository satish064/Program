#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int num = 1;
        int a = 'A';
        int k = n + 1;
        for(j=1;j<=k-i;j++)
        {
            if(j % 2 == 0)
            printf("%d ",num);
            else
            printf("%c ",a);
            num++;a++; 
        }printf("\n");
    }
    return 0;
}