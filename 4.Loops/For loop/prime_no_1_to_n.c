#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);

    for(int i=2; i<=n; i++){
        int a=0;
        for(int j=2; j<=i/2; j++){
            if(i%j==0){
                a=1;
                break;
            }
        }
        if(a==0) {
            printf("%d\n",i);
        }
    }
    return 0;
}