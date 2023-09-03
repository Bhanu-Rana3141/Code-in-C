#include<stdio.h>
int main() {
   
    // CREATE , WRITE AND CLOSE FILE
    FILE* ptr = fopen("demo.txt","w");
    char str[10] = "C language";
    fputs(str,ptr);
    fclose(ptr);


     //READ FILE

    // FILE* ptr = fopen("demo.txt","r");
    // char str[100];
    // while(fgets(str,100,ptr) != NULL);

   
    return 0;
}