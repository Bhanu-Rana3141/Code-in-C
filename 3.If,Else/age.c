#include <stdio.h>
int main()
{
    int ram_age, sham_age, ajay_age;
    printf("Enter Age of Ram: ");
    scanf("%d", &ram_age);
    printf("Enter sham age: ");
    scanf("%d", &sham_age);
    printf("Enter ajay age: ");
    scanf("%d", &ajay_age);

    if (ram_age < sham_age && ram_age < ajay_age)
    {
        printf("Ram : %d yr is youngest", ram_age);
    }
    if (sham_age < ram_age && sham_age < ajay_age)
    {
        printf("Sham : %d yr is youngest", sham_age);
    }
    if (ajay_age < ram_age && ajay_age < sham_age)
    {
        printf("Ajay : %d yr is youngest", ajay_age);
    }

    return 0;
}