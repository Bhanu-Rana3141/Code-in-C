#include<stdio.h>
int main() {
   
    do{
        int n;
        printf("Enter a number: ");
        scanf("%d",&n);
        printf("%d\n",n);

        if(n % 7==0 ){
            break;
        }

    }while(1);
    printf("Thank you!!");
   
     return 0;
}