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
    printf("\nArray: ");
    int sum=0;
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
        sum+=arr[i];
    }
    printf("\n");
    printf("SUM: %d",sum);
    return 0;
}