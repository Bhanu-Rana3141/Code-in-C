#include<stdio.h>

void england(){
    printf("I am in england\n");
    return;
}

void australia(){
    printf("I am in australia\n");
    england();
    return;
}

void india(){
    printf("I am in India\n");
    australia();
    return;
}

int main(){
    india();
    return 0;
}