#include<stdio.h>
#include<string.h>
/*Copying 1 structure into another
1.Assinging 1 structure into other.
** a DEEP COPY is created means if we will do any change in stats of second ,stats of second will be changed
and  stats of first will still remain same

2.Nesting one structure into other
*/
int main() {
    typedef struct cricketer{
        char name[15];
        int age;
        int no_of_matches;
        float average;
    }cricketer;

    // strcpy(first.name,"Virat");
    // first.age=33;
    // first.no_of_matches=300;
    // first.average=55;

    cricketer first = {"virat",33,300,55};

    cricketer second;
    second=first;
    //Changes
    strcpy(second.name,"Sachin");
    second.age=49;

    printf("%s\n",first.name);
    printf("%d\n",first.age);
    printf("%d\n",first.no_of_matches);
    printf("%f\n\n",first.average);

    printf("%s\n",second.name);
    printf("%d\n",second.age);
    printf("%d\n",second.no_of_matches);
    printf("%f\n\n",second.average);



    return 0;
}