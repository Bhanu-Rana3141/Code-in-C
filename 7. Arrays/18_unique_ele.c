#include<stdio.h>
#include<stdbool.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter arr ele: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    // for(int i=0; i<n; i++){
    //     bool flag = false;
    //     for(int j=i+1; j<n; j++){
    //         if(arr[i] == arr[j]){
    //             flag = true;
    //         }
    //     }
    //     if(flag == false){
    //         printf("%d is unique ele\n",arr[i]);
    //         break;
    //     }
    // }


// 2nd Approach
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(arr[i] == arr[j]){
    //             arr[i]=arr[j]=-1;
    //         }
    //     }
    // }

    // for(int i=0; i<n; i++){
    //     if(arr[i]>0){
    //         printf("unique ele: %d ",arr[i]);
    //     }
    // }

    
// 3rd Approach
    int unique = 0;
    for(int i=0; i<n; i++){
        unique^=arr[i];
    }

    printf("unique ele: %d ",unique);
    return 0;
}