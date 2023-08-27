#include<stdio.h>
int main() {
    int n,m;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter m: ");
    scanf("%d",&m);

    int arr[n][m];
    printf("Enter arr ele: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");

    int count=0;
    int row;
    for(int i=0; i<n; i++){
        int c=0;
        for(int j=0; j<m; j++){
            if(arr[i][j] == 1){
                c++;
            }
        }
        if(count<c){
            count=c;
            row=i;
        }
    }

    printf("count: %d\nrow: %d",count,row); 
    
    return 0;
}