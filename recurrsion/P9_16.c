/* call by value */
#include<stdio.h>
void value(int x,int y);
int main()
{
    int a=5,b=8;
    printf("a=%d b=%d\n",a,b);
    value(a,b);
    printf("a=%d b=%d\n",a,b);
    return 0;
}
void value(int x,int y)
{
    x++;
    y++;
    printf("a=%d b=%d\n",x,y);
}