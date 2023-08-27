/*
Pass by value
And for passing structure in function , structure should be declared outside of main function
*/
#include<stdio.h>
typedef struct pokemon{
    int hp;
    int attack;
    int speed;
    char tier[10];
    char name[15];
}pokemon;

void fun(pokemon p){
    printf("%d\n",p.hp);
    return;
}

void change(pokemon p){
    p.hp=200;
    p.attack=300;
    p.speed=400;
    return;
}

int main() {
   pokemon pikachu;
    pikachu.hp=50;
    pikachu.attack=60;
    pikachu.speed=100;
    
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);

    printf("\nfun result: ");
    fun(pikachu);

    change(pikachu);
    printf("\nResult after change: \n");
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);

    return 0;
}