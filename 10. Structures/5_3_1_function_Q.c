#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef struct students{
    char name[10];
    char course[10];
    char department[10];
    int year_of_joining;
}student;

bool check_department(student s1,student s2){
//    if(s1.year_of_joining == s2.year_of_joining){
//     printf("true");
//    }else{
//     printf("false");
//    } 
    
   char s1_dept[10];
   char s2_dept[10];

   strcpy(s1_dept,"CSE");
   strcpy(s2_dept,"CSE AI");

   if(strlen(s1_dept) != s2_dept){
        return false;
    }
    else{
        for(int i=0; i<strlen(s1_dept); i++){
            if(s1_dept[i] != s2_dept[i]){
                return false;
            }
        }
    }
    return true;
}

int main() {
    student s1;
    strcpy(s1.name,"Bhanu");
    strcpy(s1.course,"B.Tech");
    strcpy(s1.department,"CSE");
    s1.year_of_joining=2022;

    student s2;
    strcpy(s1.name,"Harsh");
    strcpy(s1.course,"B.Tech");
    strcpy(s1.department,"CSE AI");
    s1.year_of_joining=2021;

    bool ans = check_department(s1,s2);
    if(ans==1){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}