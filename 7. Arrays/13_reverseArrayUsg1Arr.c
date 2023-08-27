#include<stdio.h>

void reverse(int arr[],int n){
    for(int i=0,j=n-i-1; i<j; i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j] = temp;
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
    reverse(arr,n);
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}