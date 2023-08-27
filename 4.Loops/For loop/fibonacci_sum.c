#include<stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int a=0,b=1,sum=0,sum1=0;
    for(int i=1; i<=n; i++){
        sum1+=sum;
        a=b;
        b=sum;
        sum=a+b;
    }
    printf("sum: %d",sum1);
    return 0;
}