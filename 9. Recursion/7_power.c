#include<stdio.h>

int poww(int a, int b){
    if(b==0) return 1;
    return a*poww(a,b-1);
}

int main() {
    int a;
    printf("Enter a: ");
    scanf("%d",&a);

    int b;
    printf("Enter b: ");
    scanf("%d",&b);

    int power = poww(a,b);
    printf("%d",power);
    return 0;
}