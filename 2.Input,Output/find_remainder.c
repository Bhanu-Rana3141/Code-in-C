#include<stdio.h>
int main()  {
    int a,b,remainder;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    remainder=a%b;
    printf("remainder : %d",remainder);

    return 0;
}