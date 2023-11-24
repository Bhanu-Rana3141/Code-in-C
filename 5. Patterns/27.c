#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int nsp=1;
    for(int i=1; i<=(n*2)-1; i++){
        printf("%d",i);
    }
    printf("\n");
    
    for(int i=n-1; i>=1; i--){
        int a=1;
        for(int j=1; j<=i; j++){
            printf("%d",a);
            a++;
        }
        for(int j=1; j<=nsp; j++){
            printf(" ");
            a++;
        }
        for(int j=1; j<=i; j++){
            printf("%d",a);
            a++;
        }
        nsp+=2;
        printf("\n");
    }
    return 0;
}