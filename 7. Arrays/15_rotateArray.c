#include<stdio.h>

    // Steps: 
    // 1. k=k%n
    // 2. (arr,0,n-1)
    // 3. (arr,0,k-1)
    // 4. (arr,k,n-1)


void reverse(int arr[] , int a, int b){
    int i=a,j=b;

    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
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
    printf("Enter ele of arr: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int k;
    printf("Enter k: ");
    scanf("%d",&k);

    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}