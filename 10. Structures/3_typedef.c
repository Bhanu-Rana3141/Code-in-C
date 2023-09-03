/*
typedef is used to change names
Can be declared inside as well as outside of main function
typedef oldName newName


*/
//Example 1
#include<stdio.h>
typedef int Integer;
typedef float realNumber;
typedef int* pointer;
int main() {
    // int x=5;
    // float y=5.56;

    // printf("%d\n",x);
    // printf("%f\n\n",y);
    
    // Integer a=10;
    // realNumber b=3.14;
    // printf("%d\n",a);
    // printf("%f\n\n",b);

    // POINTERS
    int x=5,y=7;
    // int *a,b; int *x,int y
    // int* a=&x; int* b=&y;    
    pointer a=&x,b=&y;
    printf("%p\n",a);
    printf("%p",b);
    return 0;
}