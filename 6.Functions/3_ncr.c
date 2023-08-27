#include<stdio.h>
#include<math.h>
int factorial(int x){
    int fact=1;
    for(int i=1; i<=x; i++){
        fact=fact*i;
    }
    return fact;

}
int main(){
    int n,r;
    printf("Enter n and r: ");
    scanf("%d%d",&n,&r);
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    printf("ncr: %d",ncr);
    return 0;
}