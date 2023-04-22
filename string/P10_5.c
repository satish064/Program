/* Strlen() function */
#include<stdio.h>
#include<string.h>
unsigned int astrlen(char str[]);
unsigned int pstrlen(char *ptr);
int main()
{
    char str[50];
    printf("Enter a character : ");
    gets(str);
   // printf("length of the string is : %u\n",strlen(str));
    printf("length of the string is : %u\n",pstrlen(str));
    return 0;
}
unsigned int astrlen(char str[])
{
    int i=0;
    while(str[i]!='\0')
        i++;
    return i;
}
unsigned int pstrlen(char *str)
{
    char *p = str;
    while(*p!='\0')
    p++;
    return p-str;
}