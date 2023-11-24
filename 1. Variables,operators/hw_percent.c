#include<stdio.h>
int main() {
    float s1 = 30;
    float s2 = 20;
    float s3 = 25;
    float s4 = 29;
    float Total=s1+s2+s3+s4;
    float out_of = 160;

    float percentage = (Total/out_of)*100;
    printf("percentage : %f",percentage);


    return 0;
}