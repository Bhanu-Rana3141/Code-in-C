#include<stdio.h>
int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter array: ");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    printf("Array: ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int product=1;
    for(int i=0; i<size; i++){
        product*=arr[i];
    }
    printf("\nProduct: %d",product);

    return 0;
}