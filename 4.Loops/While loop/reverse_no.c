#include <stdio.h>
int main()
{
    int n = 1234;
    int rev = 0;
    int last_digit = 0;

    while (n > 0)
    {
        last_digit = n % 10;
        rev = rev * 10 + last_digit;
        n = n / 10;
    }
    printf("\nrev : %d", rev);

    return 0;
}