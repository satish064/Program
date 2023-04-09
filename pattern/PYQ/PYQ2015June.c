#include<stdio.h>
int main()
{
    int n=3,i,j,k,l,m,o=0;
    for(i=1;i<=n;i++)
    {
        int x = o;
        for(j=1;j<=n-i;j++)
        printf(" ");
        for(k=1;k<=i;k++)
        printf("%d",k);
        for(l=1;l<i;l++)
        printf("%d",x--);
        printf("\n");o++;
    }
    int p = 2,z=1;
    for(i=1;i<n;i++)
    {
        for(j=1;j<=i;j++)
        printf(" ");
        for(k=1;k<=p;k++)
        printf("%d",k);
        for(l=1;l<=z;l++)
        printf("%d",l);
        printf("\n");p--;z--;
    }
}