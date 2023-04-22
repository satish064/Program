#include<stdio.h>
#include<string.h>
#define SIZE 50
int main()
{
    char str[SIZE];
    puts("Enter the string : ");
    gets(str);
    int size = 0;
    int k=0;
    while(str[k]!='\0')
    {
        size++;
        k++;
    }
    for(int i=0,j=size-1;i<=j;i++,j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts("Reverse string is : ");
    puts(str);
    return 0;
}