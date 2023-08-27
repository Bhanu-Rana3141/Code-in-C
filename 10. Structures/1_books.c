#include<stdio.h>
#include<string.h>
int main() {
    typedef struct book{
        char name[10];
        float price;
        int no_of_pages;
    }book;

    // strcpy(x,y)  --> y ki value x m copy hojayegi but the condition is (size of x) > than (size of value of y)
    
    // All the values should be passed as the order of attributes.
    book a ={"java",125.20,400};
    book b ={"c++",155.20,500};
    book c = {"dbms",220.45,200};

    // strcpy(a.name,"java");
    // a.price = 125.20;
    // a.no_of_pages = 400;

    // strcpy(b.name,"c++");
    // b.price = 155.20;
    // b.no_of_pages = 500;

    // strcpy(c.name,"dbms");
    // c.price=220.45;
    // c.no_of_pages = 200;

    printf("%s\n",a.name);
    printf("%.2f\n",a.price);
    printf("%d\n",a.no_of_pages);

    printf("\n%s\n",b.name);
    printf("%.2f\n",b.price);
    printf("%d\n",b.no_of_pages);

    printf("\n%s\n",c.name);
    printf("%.2f\n",c.price);
    printf("%d\n",c.no_of_pages);

    
   
    

    return 0;
}