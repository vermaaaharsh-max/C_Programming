#include <stdio.h>
#include <string.h>
 typedef union pokemon{
        char name[150];
        int hp;
        int attack;
        int speed;
        char tier;
        } pokemon;
int main () {
    pokemon pikachu ;
    pikachu.hp = 60;
    pikachu.attack = 70;
    pikachu.speed = 100;
    pikachu.tier = 'A';
    
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    return 0;
}