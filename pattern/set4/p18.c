#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        char c = 'A';
        int s = 'a';
        for(j=1;j<=n-i;j++)
        printf(" ");
        for(k=1;k<=i;k++)
        {
            if(i % 2 == 0)
            printf("%c",c);
            else
            printf("%c",s);
            s++;c++;
        }
        printf("\n");
    }return 0;
}