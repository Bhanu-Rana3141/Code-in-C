#include<stdio.h>
int main() {
    int arr[8] = {1,2,3,4,5,6,7,8};
    int triplets=0;

    for(int i=0; i<8; i++){
        for(int j=i+1; j<8; j++){
            for(int k=j+1; k<8; k++){
                if(arr[i]+arr[j]+arr[k] == 12){
                    triplets++;
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    printf("triplets: %d",triplets);
    return 0;
}