#include<stdio.h>
int main()
{
    int i,j,k,l,m=0,n;
    printf("Enter a number; ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        int s = i;
        for(k=1;k<=i;k++)
        {
            printf("%d",s++);
        }
        int q = m;
        for(l=1;l<i;l++)
        printf("%d",q--);
        printf("\n");m+=2;
    }return 0;
}