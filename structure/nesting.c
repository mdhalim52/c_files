#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct pokemon
    {
        char name[50];
        int hp;
        int attack;
    }pokemon;


    typedef struct legenderypokemon
    {
        pokemon normal;
        char ability[10];
    }legenderypokemon;

    legenderypokemon mewtow;

    typedef struct godpokemon
    {
        legenderypokemon pro;
        char specialattack[10];
            
    }godpokemon;
    
    godpokemon arceus;

    strcpy(mewtow.ability, "pressure");
    mewtow.normal.hp = 230;
    strcpy(arceus.specialattack, "fire");
    arceus.pro.normal.hp = 450;
    
    return 0;
}