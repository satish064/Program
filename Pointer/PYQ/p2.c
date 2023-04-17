/* program to find the square of a number using pointers */
#include<stdio.h>
int main()
{
    int a=5;
    int *ps=&a;
    int square = ((*ps)*(*ps))
    printf("a square is = %d",square);
    return 0;
}