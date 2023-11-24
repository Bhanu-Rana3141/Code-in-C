#include<stdio.h>
int main() {
    int y;
    printf("Enter year : ");
    scanf("%d",&y);

    if(y%4==0){
        printf("yes! it's a leap year");
    }
    else{
        printf("Not leap year");
    }

    return 0;
}