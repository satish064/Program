#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1,k=65;j<=n;j++,k++){
            printf("%c ",k);
        }printf("\n");
    }return 0;
}