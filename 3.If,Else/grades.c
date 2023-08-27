#include<stdio.h>
int main() {
    int m;
    printf("Enter percentage: ");
    scanf("%d",&m);

    if(m>80 && m<=100){
        printf("%d : A grade",m);
    }
    else if (m>60) {
        printf("%d : B grade",m);
    }
    else if(m>40){
        printf("%d : C grade",m);
    }
    else{
        printf("%d : Fail",m);
    }

    return 0;
}