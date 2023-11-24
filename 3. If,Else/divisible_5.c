#include<stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n%5==0) {
        printf("divisible by 5");
    }
    else{
        printf("not divisble");
    }

    return 0;
}