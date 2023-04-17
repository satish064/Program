/*write a program to swap two values of 
variables, using pointers. */
#include<stdio.h>
int main()
{
    int a=5,b=7,temp;
    int *p1=&a;
    int *p2=&b;
    printf("before swapping a=%d b=%d\n",a,b);
    printf("After swapping :\n");
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("a=%d b=%d",a,b);
    return 0;
}