#include<stdio.h>
int main() {
    int n,m;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter m: ");
    scanf("%d",&m);

    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    //  for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         printf("%d ",arr[j][i]);
    //     }
    //     printf("\n");
    // }

    int brr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            brr[i][j] = arr[j][i];
        }
    }

     for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}