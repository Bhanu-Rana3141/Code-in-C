#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    
    int nsp =0;
    for(int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            printf("*");
        }
        for(int j=1; j<=nsp; j++){
            printf(" ");
        }
        for(int j=n; j>=i; j--){
            printf("*");
        }
        nsp+=2;
        printf("\n");
    }
    return 0;
}