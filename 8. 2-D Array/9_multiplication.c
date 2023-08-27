#include<stdio.h>
int main() {
    int m,n;
    printf("Enter rows: ");
    scanf("%d",&m);
    printf("Enter cols: ");
    scanf("%d",&n);

    int a[m][n];
    printf("Enter ele of first array: \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    int p;
    printf("Enter row: ");
    scanf("%d",&p);
    int q;
    printf("Enter col: ");
    scanf("%d",&q);
    

    int b[p][q];
    printf("Enter ele of second array: \n");
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            scanf("%d",&b[i][j]);
        }
    }

    int res[m][q];
    if(n!=p){
        printf("matrix can't be multiplied");
    }
    else{
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                res[i][j] = 0;
            for(int k=0; k<n; k++){
                res[i][j] += a[i][k] * b[k][j];
            }
            }
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}