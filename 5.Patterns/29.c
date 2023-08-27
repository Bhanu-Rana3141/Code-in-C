#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int nsp=1;
    for(int i=1; i<=n; i++){
        printf("%d",i);
    }
    for(int i=n-1; i>=1; i--){
        printf("%d",i);
    }
    printf("\n");

    for(int i=n-1; i>=1; i--){
        for(int j=1; j<=i; j++){
            printf("%d",j);
        }
        for(int j=1; j<=nsp; j++){
            printf(" ");
        }
        for(int j=i; j>=1; j--){
            printf("%d",j);
        }
        nsp+=2;
        printf("\n");
    }
    return 0;
}