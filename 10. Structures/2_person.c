#include<stdio.h>
#include<string.h>
int main() {
    typedef struct person{
        char name[50];
        int salary;
    }person;

    person person_1;
    person person_2;

    strcpy(person_1.name,"Bhanu");
    person_1.salary = 30000000;

    strcpy(person_2.name,"Harsh");
    person_2.salary = 30000000;

    printf("%s\n",person_1.name);
    printf("%d",person_2.salary);
    return 0;
}