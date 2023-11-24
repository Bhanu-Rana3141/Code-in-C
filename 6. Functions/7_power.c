#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    printf("Enter a and b: ");
    scanf("%d%d",&a,&b);

    int power = pow(a,b);
    printf("%d",power);
}