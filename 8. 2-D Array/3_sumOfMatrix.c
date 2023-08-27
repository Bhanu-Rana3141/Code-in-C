#include<stdio.h>
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
    printf("\nprinting array: ");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           sum+=arr[i][j];
        }
    }

    printf("sum: %d",sum);


    return 0;
}