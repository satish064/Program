/* INput and Output strings using gets() and puts() */
#include<stdio.h>
int main()
{
    char name[40];
    printf("Enter the first name : ");
    gets(name);
    printf("Entered name is :");
    puts(name);
    return 0;
}