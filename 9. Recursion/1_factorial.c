#include<stdio.h>

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int fact = factorial(n);
    printf("factorial: %d",fact);
    return 0;
}