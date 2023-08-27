#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int temp=n;
    int sum=0;
    int x;
    while(n>0){
        x=n%10;
        sum=sum+(x*x*x);
        n=n/10;
    }
    printf("sum : %d\n",sum);
if(sum==temp){
    printf("%d is Armstrong number",sum);
}
else{
    printf("%d not armstrong",sum);
}
    return 0;
}