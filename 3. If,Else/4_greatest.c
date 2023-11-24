#include<stdio.h>
int main() {
    int a,b,c,d;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter c: ");
    scanf("%d",&c);
    printf("Enter d: ");
    scanf("%d",&d);

    if(a>=b && a>=c && a>=d) {
        printf("a : %d is greater",a);
    }
    else if(b>=a && b>=c && b>=d) {
        printf("b : %d is greater",b);
    }
    else if(c>=a && c>=b && c>=d){
        printf("c : %d is greater",c);
    }
    else{
        printf("d : %d is greater",d);
    }

    return 0;
}