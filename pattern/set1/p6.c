#include<stdio.h>
int main(){
    int n,i,x,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int x = n+i;
        for(j=i;j<x;j++){
            printf("%d ",j);
        }printf("\n");
    }return 0;
}