#include<stdio.h>
int main() {
    int dividend,divisor;
    printf("Enter dividend: ");
    scanf("%d",&dividend);
    printf("Enter divisor: ");
    scanf("%d",&divisor);
    int quotient = dividend/divisor;
    int remainder = dividend - divisor*quotient;
    printf("Remainder after dividing %d by divisor %d gives : %d",dividend,divisor,remainder);

    return 0;
}