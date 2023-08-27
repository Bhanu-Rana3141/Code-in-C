#include<stdio.h>
int main() {
    int a=34;
    int* x=&a;

    printf("%d\n",x);
    printf("%d",x+2);
    return 0;
}