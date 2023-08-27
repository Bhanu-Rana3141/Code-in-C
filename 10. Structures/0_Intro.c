/*

// WHAT ARE STRUCTURES?

Structures are user defined data type
used to store multiple attributes(properties) of differnt data types in a class


******
Jab ek class ki kaffi saari alag-alag data types ki properties hon , tho hum array use nhi krenge 
because every property will be of different data type and hr property k liye alag array create 
karna padega

FOR EXAMPLE: 
                                        CAR 

              Engine        tyres       no_of_seats     name        color                          
******


// WHY TO USE STRUCTURES ?

If we have to store grade,percentage and roll no of students,in that case we have to create different arrays for each\
char[grade];
float[percentage];
int[roll no];

Usage of multiple arrays is not a good practice, So to overcome this we use structures
we create a structure and all of the attributes are stored in that structure

***** 


We can create ARRAY in structure
Structure can be created in structure, but the condition is Structure same name ka nahi hona chahiye


************HOW STRUCTURE ELEMENTS ARE STORED ? ****************
Elements are stored in a continuous manner , one after another.


**********************************TYPEDEF**********************
typedef is used to change name
            typedef oldName newName
**CAN BE USED INSIDE OR OUTSIDE OF MAIN FUNCTION


for example :
when we create a class :
    struct cricketer{
        //attributes
    };

    struct cricketer first;  
    struct cricketer second;
// jb hum cricketer class k attributes ko access krte hain toh uske liya hume objects create krna padte hain
    therefore every new object we create ,**firstly STRUCT has to be written .

 ***   So here we use typedef :
    typedef struct cricketer{
        //attributes
    }cricketer;

    ** struct cricketer -> cricketer
    here we don't need to write struct again and again


    


*/

// Structure Declaration
#include<stdio.h>

int main(){
   struct student{
    // Attributes  --> are accessed by . operator
    int roll_no;
    float cgpa;
    char grade;
    int group;
   }bhanu;    //declaration with structure

//    struct student bhanu;
    bhanu.roll_no = 11;
    bhanu.cgpa = 9.48;
    bhanu.grade = 'o';
    printf("Enter group: ");
    scanf("%d",&bhanu.group);

    printf("%d",bhanu.roll_no);
    printf("\n%.2f",bhanu.cgpa);
    printf("\n%c",bhanu.grade);
    printf("\n%d",bhanu.group);

    return 0;   
}