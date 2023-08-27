#include<stdio.h>
int main() {
    float x,z;
    int y;

    printf("Enter x: ");
    scanf("%f",&x);
    y=x;
    printf("y: %d",y);
    z=x-y;
    printf("\nz after %f - %d will be : %f",x,y,z);
    
    


    return 0;
}