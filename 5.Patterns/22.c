#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        int a=i-1;
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("%d",j);
        }
        for(int j=1; j<=i-1; j++){
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}