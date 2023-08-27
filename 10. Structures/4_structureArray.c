#include<stdio.h>
#include<string.h>

int main() {
    typedef struct cricketer{
        char firstname[15];
        char lastName[15];
        int age;
        int no_of_matches;
        float average;
    }cricketer;

printf("Enter stats: ");
  cricketer arr[3];
   for(int i=0; i<3; i++){
    scanf("%s",&arr[i].firstname);
    scanf("%s",&arr[i].lastName);
    scanf("%d",&arr[i].age);
    scanf("%d",&arr[i].no_of_matches);
    scanf("%f",&arr[i].average);
   }

   for(int i=0; i<3; i++){
    printf("%s",arr[i].firstname);
    printf("%s\n",arr[i].lastName);
    printf("%d\n",arr[i].age);
    printf("%d\n",arr[i].no_of_matches);
    printf("%f\n\n",arr[i].average);
   }
    
    return 0;
}