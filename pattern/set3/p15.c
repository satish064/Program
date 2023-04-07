#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter a number: ");
    scanf("%d",&n);
    char A = 'A';int l = 1;
    for(i=n;i>=1;i--)
    {
        
        for(j=1;j<=i;j++)
        {
            printf("%c ",A++);
        }
        for(k=1;k<l;k++)
        A++;
        printf("\n");l++;
    }return 0;
}