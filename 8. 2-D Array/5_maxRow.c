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

    int maxSum=0;int row=0;
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=0; j<m; j++){
            sum+=arr[i][j];
        }
        if(maxSum<sum){
            maxSum=sum;
            row=i;
        }
    }
    printf("max sum: %d\n",maxSum);
    printf("row: %d",row);
  
  


    return 0;
}