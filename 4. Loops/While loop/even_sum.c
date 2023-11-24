#include<stdio.h>
int main() {
    int n=123456;
    int sum=0;
    int last_digit=0;
    while(n>0) {
        last_digit=n%10;
        if(last_digit%2==0) {
            sum=sum+last_digit;
        }
        n=n/10;
        
    }
    printf("sum of even no's : %d",sum);
    return 0;
}