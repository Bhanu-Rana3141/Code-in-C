/*
What is the use of nesting structure ?
--> TO avoid writing same attributs again and again , instead of writing same attribute again we can just nest 
structure in newly created structure, and all the attributes will be copied in it

normal --> legend --> god
*/

#include<stdio.h>
#include<string.h>
int main() {
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;

    typedef struct legendaryPokemon{
        pokemon normal;                // declared
        char ability[20];
    }legendaryPokemon;
    
    typedef struct godPokemon{
        legendaryPokemon legend;      // declared
        int specialAttack;
    }godPokemon;

    godPokemon god;                    // declared
    god.specialAttack=0;
    strcpy(god.legend.ability,"Can turn anything in stone");
    god.legend.normal.attack=50;
    god.legend.normal.hp=100;


    printf("%d\n",god.specialAttack);
    printf("%s\n",god.legend.ability);
    printf("%d\n",god.legend.normal.attack);
    printf("%d",god.legend.normal.hp);
    
    
    return 0;
}