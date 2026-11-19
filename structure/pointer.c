#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon
    {
        int hp;
        int xp;
        int name[10];
        int ability[15];

    }pokemon;
    
int main()
{
    pokemon pikachu;

    pokemon *ptr = &pikachu;

    pikachu.hp = 340;
    pikachu.xp = 54;

    printf("%p\n", &ptr);
    printf("%p\n", &pikachu.hp);
    printf("%p\n", &pikachu.xp);

    return 0;

}