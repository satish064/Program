/* program to print characters of a string and address of each character*/
#include<stdio.h>
int main()
{
char str[] = "New Delhi";
for(int i=0;str[i]!='\0';i++)
{
    printf("Character = %c\t",str[i]);
    printf("Address = %d\n",&str[i]);
}
return 0;
}
