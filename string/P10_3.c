/* Input and output string using scanf() and printf() */
#include<stdio.h>
int main()
{
    char name[40];
    printf("Enter the first name : ");
    scanf("%s",name);
    printf("%s %s\n",name,"Paul");
    return 0;
}