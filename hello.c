#include<stdio.h>
int main()
{
    int n = 5;
    int i,j;
    for(i = 1;i<=n;i++)
    {
        int a = 5;
        for(j=1;j<=i;j++)
        {
            printf("%d ",a--);
        }  printf("\n");
    }return 0;
}