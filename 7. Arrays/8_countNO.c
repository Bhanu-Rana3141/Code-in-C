#include<stdio.h>
int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int count=0;
    for(int i=0; i<7; i++){
        if(arr[i]>4){
            count++;
        }
    }
    printf("COUNT: %d",count);
    return 0;
}