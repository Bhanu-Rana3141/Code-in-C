#include<stdio.h>
int main() {
    int arr[5] = {1,2,3,4,5,};

    //printing address
    printf("%d",arr);
    printf("\n%d\n",&arr[0]);
    printf("%d\n",arr + 1);
    printf("%d\n\n",&arr[1]);

    //printing value
    printf("%d",*(arr));
    printf("\n%d\n",*(&arr[0]));
    printf("%d\n",*(arr + 1));
    printf("%d",*(&arr[1]));

    return 0;
}