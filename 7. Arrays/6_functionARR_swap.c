#include<stdio.h>
int fun(int arr[]) {
    arr[0] = arr[0] + arr[1];
    arr[1] = arr[0] - arr[1];
    arr[0] = arr[0] - arr[1];
    return 0;
}
int main() {
    int arr[2] = {2,5};
    printf("a: %d ,  ",arr[0]);
    printf("b: %d",arr[1]);
    fun(arr);
    printf("\na: %d",arr[0]);
    printf("\nb: %d",arr[1]);
    return 0;
}