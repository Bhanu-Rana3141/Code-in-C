#include<stdio.h>
int main(){
    
    int n;
    printf("Enter no of rows: ");
    scanf("%d",&n);

    int m;
    printf("Enter no of cols: ");
    scanf("%d",&m);

    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}