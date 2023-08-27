#include<stdio.h>
#include<limits.h>
int main() {
    int size;
    printf("Enter size: ");
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
    printf("\n\n");
    int max=0;
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];        }
    }
    printf("MAX ele: %d",max);

   
    return 0;
}