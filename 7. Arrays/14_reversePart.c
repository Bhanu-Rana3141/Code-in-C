#include<stdio.h>

void reversePart(int arr[],int n){
    int i=2,j=n-i;
    while(i<j){
        int temp=arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);


    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    reversePart(arr,n);

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}