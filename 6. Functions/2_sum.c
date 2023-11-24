#include<stdio.h>
int sum(int a,int b){
    return a+b;
}

int main(){
    int a,b,sum;
    printf("Enter a and b: ");
    scanf("%d%d",&a,&b);
    printf("sum: %d",a+b);
    return 0;

}