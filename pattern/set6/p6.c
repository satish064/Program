#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        printf(" ");
        int p = 1;
        for(k=1;k<=i;k++)
        printf("%d",p++);
        int m = i - 1;
        for(l=1;l<i;l++)
        printf("%d",m--);
        printf("\n");
    }
    return 0;
}
/*
i=6,j=4 ,p=1 ,k=1 ,m=1 ,l=1
    1
   121
  12321
 1234321
123454321

*/