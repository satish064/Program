#include<stdio.h>
void func(int a,int b);
int main(){
    int x=10,y=20;
    func(x,y);
    printf("x=%d,y=%d",x,y);
    return 0;
}
void func(int a,int b)
{
        a++;
        b--;
        printf("a=%d,b = %d\n",a,b);
}