#include <stdio.h>
#include <string.h>
int main() {
     typedef struct pokemon{
        char name[150];
        int hp;
        int attack;
        int speed;
        char tier;
        } pokemon;
    typedef struct legendarypokemon{
        pokemon normal;
        char ability[100];
    } legendarypokemon;
    typedef struct godpokemon{
        legendarypokemon legend;
        int specialattack;
    } godpokemon;
     godpokemon arceus;
    arceus.specialattack = 300;
    strcpy(arceus.legend.ability,"Turn Anyone to Stone.");
    arceus.legend.normal.attack=500;
    legendarypokemon mewtwo;
    strcpy(mewtwo.ability,"Pressure");
    mewtwo.normal.hp=150;
    mewtwo.normal.attack=180;
    strcpy(mewtwo.normal.name,"Mewtwo");
    mewtwo.normal.speed=180;
    mewtwo.normal.tier='S';

    printf("%d",arceus.legend.normal.attack);
    return 0;
}