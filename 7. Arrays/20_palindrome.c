#include<stdio.h>
#include<stdbool.h>


int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    bool palindrome=true;
    for(int i=0,j=n-1; i<j; i++,j--){
        if(arr[i] != arr[j]){
            palindrome=false;
            break;
        }
    }

    if(palindrome == false){
        printf("array is not palindrome");
    }
    else{
        printf("array is palindrome");
    }

    return 0;
}