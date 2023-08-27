#include<stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int m;
    printf("Enter m: ");
    scanf("%d",&m);

    int students[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&students[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",students[i][j]);
        }
        printf("\n");
    }
    return 0;
}