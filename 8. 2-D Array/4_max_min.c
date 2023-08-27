#include<stdio.h>
#include<limits.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int m;
    printf("Enter m: ");
    scanf("%d",&m);

    int arr[n][m];
    printf("Enter ele: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nprinting array: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int max=INT_MIN;
  int i_idx=0;
  int j_idx=0; 
   for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        if(arr[i][j] > max){
            max=arr[i][j];
            i_idx=i;
            j_idx=j;
        }
    }
   }

   int min=INT_MAX;
   int mini_idx=0;
   int minj_idx=0;
   for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        if(arr[i][j] < min){
            min=arr[i][j];
            mini_idx=i;
            minj_idx=j;
        }
    }
   }

   printf("Max: %d and index : (%d,%d)\n",max,i_idx,j_idx);
   printf("Min: %d and index: (%d,%d)",min,mini_idx,minj_idx); 

    return 0;
}