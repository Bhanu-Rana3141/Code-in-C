#include<stdio.h>
int main() {
    int size;
    printf("Enter size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter array: ");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    printf("\nArray: ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n\n");

    int even_sum=0,odd_sum=0;
    for(int i=0; i<size; i++){
        if(i%2==0) {
            even_sum+=arr[i];
        }
        else{
            odd_sum+=arr[i];
        }
    }

    printf("Even sum: %d\n",even_sum);
    printf("Odd sum: %d\n",odd_sum);
    int diff = odd_sum - even_sum;
    printf("diff: %d",diff);


    return 0;
}