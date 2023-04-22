#include<stdio.h>
#include<string.h>
int astrcmp(char str1[],char str2[]);
int pstrcmp(char *str1,char *str2);
int main()
{
    char str1[50],str2[30];
    
    printf("Enter the first string : ");
    printf("\n");
    gets(str1);
    printf("Enter the second string : ");
    gets(str2);
    printf("%d",pstrcmp(str1,str2));
    return 0;
}
int astrcmp(char str1[],char str2[])
{
    int f=0,i;
    for(i=0;str1[i]==str2[i];i++)
    {
        if(str1[i]=='\0')
        return 0;
    }
    return (str1[i]-str2[i]);
}
int pstrcmp(char *str1,char *str2)
{
    int i;
    char *s1 = str1;
    char *s2 = str2;
    while(*str1==*str2)
    {
        if(*str1 == '\0')
        return 0;
        str1++;
        str2++;
    }
    return (*str1-*str2);
}