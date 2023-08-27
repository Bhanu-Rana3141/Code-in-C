#include<stdio.h>
int main() {
    int a;
    printf("Enter a: ");
    scanf("%d",&a);

    int* x = &a;
    printf("%p\n",x);
    printf("%p\n",&a);
    printf("%d\n",*x);
    *x = 40;
    printf("%d",*x);

    return 0;
}