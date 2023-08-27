#include<stdio.h>
int main() {
    int x,y;
    printf("Enter n: ");
    scanf("%d",&x);
    printf("Enter y: ");
    scanf("%d",&y);
    
   for(int i=x; i<=y; i++){
    int temp=i;
    int sum=0;
    int x=0;

    while(temp>0){
        x=temp%10;
        sum+=(x*x*x);
        temp/=10;
    }
    if(sum==i){
        printf("%d\n",i);
    }
   }
    return 0;
}