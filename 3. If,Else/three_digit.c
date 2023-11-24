#include<stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n>99 && n<1000) {
        printf("Number is greater");
    }
    else{
        printf("Not greater");
    }

    return 0;
}