#include<stdio.h>
int main()  {
    int l;
    printf("Enter length: ");
    scanf("%d",&l);
    int b;
    printf("Enter breadth: ");
    scanf("%d",&b);

    int area;
    area = l*b;
    printf("The area is : %d",area);

    int perimeter;
    perimeter = 2*(l+b);
    printf("\nThe perimeter : %d",perimeter);

    if(area>perimeter) {
        printf("\nArea is greater than perimeter");
    }
    else if(area==perimeter) {
        printf("\nArea & perimeter are equal");
    }
    else {
        printf("\nArea is small than perimeter");
    }
}