// #include<stdio.h>
// int main() {
//     int arr[5];
//     printf("Enter elements: ");
//     for(int i=0; i<5; i++){
//         scanf("%d",&arr[i]);
//     }

//     printf("Array: ");
//     for(int i=0; i<5; i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");

//     printf("Reversing array: ");
//     for(int i=4; i>=0; i--){
//         printf("%d ",arr[i]);
//     }
//     return 0;

// }

#include<stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int x;
    printf("Enter x: ");
    scanf("%d",&x);

    int triplets=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(arr[i]+arr[j]+arr[k] == x){
                    printf("(%d , %d , %d)\n",arr[i],arr[j],arr[k]);
                    triplets++;
                }
            }
        }
    }
    printf("\n\n%d",triplets);
    return 0;
}