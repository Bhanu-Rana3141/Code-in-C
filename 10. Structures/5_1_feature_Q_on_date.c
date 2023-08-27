#include<stdio.h>
#include<string.h>
#include<stdbool.h>
// All the attributes of 2 user defined data types can't be compared collectively , they can be compared individually 

int  main() {
    typedef struct date{
        int day;
        int month;
        int year;
    }date;

    date a;
    a.day = 12;
    a.month=7;
    a.year= 2003; 

    date b;
    b.day = 12;
    b.month=7;
    b.year = 2002;

    bool flag=true;
    if(a.day!=b.day) flag=false;
    if(a.month!=b.month) flag=false;
    if(a.year!=b.year) flag=false;

    if(flag==true){
        printf("Equal");
    }else{
        printf("Unequal");
    }

    return 0;
}