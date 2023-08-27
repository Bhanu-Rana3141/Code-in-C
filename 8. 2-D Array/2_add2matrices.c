#include<stdio.h>
int main() {
    int n,m;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter m: ");
    scanf("%d",&m);

    int a[n][m];
    printf("Enter ele of 1st array: ");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter ele of 2nd array: ");
    int b[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&b[i][j]);
        }
    }

    // int res[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }

    return 0;
}