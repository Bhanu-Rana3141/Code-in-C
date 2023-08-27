#include<stdio.h>
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    int sum=0;
    int last_digit = 0;

    while(n>0) {
        last_digit = n%10;
        sum=sum+last_digit;
        n=n/10;
        printf("sum of no is : %d",sum);
    }
    
    return 0;
}