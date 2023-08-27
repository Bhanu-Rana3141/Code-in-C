#include<stdio.h>
int main() {
    printf("Enter array: ");
    int marks[10];
    for(int i=0; i<10; i++){
        scanf("%d",&marks[i]);
    }

    printf("Marks of students: ");
    for(int i=0; i<10; i++){
        printf("%d ",marks[i]);
    }
    printf("\n\n");
    printf("Marks of students less than 35: ");
    for(int i=0; i<10; i++){
        if(marks[i]<35){
            printf("%d ",i);
        }
    }

    return 0;
}