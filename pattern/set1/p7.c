#include<stdio.h>
int main(){
    int n,i,j,x;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        x = n*2-i;
        for(j=x;j>n-i;j--){
            printf("%d ",j);
        }printf("\n");
    }return 0;
}