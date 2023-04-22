#include<stdio.h>
#include<string.h>
unsigned pstrlen(char *str);
unsigned astrlen(char str[]);
int main()
{
    char str[50];
    printf("Enter a string : ");
    gets(str);
    printf("String size is %d",astrlen(str));
    return 0;

}
unsigned pstrlen(char *str)
{
    char *p = str;
    while(*p!='\0')
    p++;
    return p-str;
}
unsigned astrlen(char str[])
{
    int i=0;
    while(str[i] != '\0')
    i++;
    return i;
}