#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int nsp=1;
    for(int i=1; i<=(n*2)-1; i++){
        printf("*");
    }
    printf("\n");
    for(int i=1; i<=n-1; i++){
        for(int j=n-1; j>=i; j--){
            printf("*");
        }
        for(int j=1; j<=nsp; j++){
            printf(" ");
        }
        for(int j=n-1; j>=i; j--){
            printf("*");
        }
        nsp+=2;
        printf("\n");
    }
    return 0;
}