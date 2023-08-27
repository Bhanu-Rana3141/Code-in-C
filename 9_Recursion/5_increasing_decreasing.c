 #include<stdio.h>

 void decreasing_increasing(int n){
    if(n==0) return;
    printf("%d\n",n);
    decreasing_increasing(n-1);
    printf("%d\n",n);
    return;
 }

 int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    decreasing_increasing(n);
    return 0;
 }