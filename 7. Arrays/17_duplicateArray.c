#include<stdio.h>

void duplicate(int arr[],int n){

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                printf("%d is duplicate",arr[i]);
                break;
            }
        }
    }
    return;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter ele of array: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    duplicate(arr,n);

    return 0;
}