#include<stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    int a=0;
    for(int i=2; i<n; i++) {
        if(n%i==0) {
            a=1;
            break;
        }
    }
    if(n==1){
        printf("1 neither prime nor composite");
    }
    else if(a==0) {
        printf("prime no");
    }
    else{
        printf("not prime");
    }

    return 0;
}