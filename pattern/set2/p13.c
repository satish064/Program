#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    char c = 'A';
    for(i=1;i<=n;i++)
    {
        char x = c;
        for(j=1;j<=i;j++)
        {
          printf("%c ",x--);
        } printf("\n");
         c+=2;
    }return 0;
}
