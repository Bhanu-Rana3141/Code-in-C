/*
Address of string can be printed without using AMPERSAND(&)
Pass by reference
(*p).  -->  p->
*/

#include<stdio.h>
typedef struct person{
    int age;
    float weight;
}person;

int main() {
    person p1;
    person* x = &p1;  //initialization

    x->age = 20;      //Accessing
    x->weight = 63.5;

    printf("%d\n",x->age);
    printf("%.2f",x->weight);



// typedef struct pokemon{
//    int attack;
//    int hp;
//    int speed;
//    char tier;
// }pokemon;

// void change(pokemon* p){            // Modification
//     p->hp = 200;
//     p->attack=250;
//     p->speed = 300;
//     p->tier = 'B';
// }

// int main() {
//    pokemon pikachu;
// //    int* x=&pikachu;
//     pikachu.hp=100;
//     pikachu.attack=50;
//     pikachu.speed=70;
//     pikachu.tier = 'A';

//     printf("%d\n",pikachu.hp);
//     printf("%d\n",pikachu.attack);
//     printf("%d\n",pikachu.speed);
//     printf("%c\n\n",pikachu.tier);

//     change(&pikachu);

//     printf("%d\n",pikachu.hp);
//     printf("%d\n",pikachu.attack);
//     printf("%d\n",pikachu.speed);
//     printf("%c\n\n",pikachu.tier);

    return 0;
}