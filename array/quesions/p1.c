/* Program to convert a decimal numbr to Binary, Octal or hexadecima */
#include<stdio.h>
void func(int num,int b);
int main()
{
    int n,ch;
    printf("Enter a decimal number : ");
    scanf("%d",&n);
    printf("1.Binary\n2.Octal/3.Hexadecimal\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1 :
            printf("Binary equivalent is : ");
            func(n,2);
            break;
    case 2 :
            printf("Octal equivalent is : ");
            func(n,8);
            break;
    case 3 :
            printf("Hexadecima equivalent is : ");
            func(n,16);
            break;
    }
    printf("\n");
    return 0;
}
void func(int num,int b)
{
    int i=0,j,rem;
    char arr[20];
    while (num>0)
    {
        rem = num % b;
        num/=b;
        if(num > 9 && num < 16)
            arr[i++] = rem-10+'A';
        else
            arr[i++] = rem + '0';
    }
    for(j=i-1;j>=0;j--)
    printf("%c",arr[j]);
}