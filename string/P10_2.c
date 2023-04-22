/* Program to print the address and characters of a string using pointer */
#include<stdio.h>
int main()
{
    char str[] = "INDIA";
    char *ptr;
    ptr = str;
    while(*ptr !='\0')
    {
        printf("Character = %c\t",*ptr);
        printf("Address = %p\n",ptr);
        ptr++;
    }
    return 0;
}