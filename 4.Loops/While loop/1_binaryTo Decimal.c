#include<stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int m;
    printf("Enter m: ");
    scanf("%d",&m);

    for(int i=n; i<=m; i++){
        int temp=i;
        int sum=0;
        int x=0;

        while(temp>0){
            x=temp%10;
            sum+=x*x*x;
            temp/=10;
        }
        if(sum == i){
            printf("%d\n",sum);
        }
    }
    return 0;
}