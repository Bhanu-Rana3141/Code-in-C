#include<stdio.h>
int main() {
    printf("Array: ");
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Array: ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
   for(int i=0; i<size; i++){
    if(i%2!=0){
        arr[i] *=2;
    }
    else{
        arr[i] +=10;
    }
   }
    printf("\nArray after operation: ");
   for(int i=0; i<size; i++){
    printf("%d ",arr[i]);
   }
    return 0;
}