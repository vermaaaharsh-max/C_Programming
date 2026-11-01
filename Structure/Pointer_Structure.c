#include <stdio.h>
#include <string.h>
 typedef struct pokemon{
        char name[150];
        int hp;
        int attack;
        int speed;
        char tier;
        } pokemon;
int main () {
    pokemon pikachu;
    pokemon* x = &pikachu;
    printf("%p",x);
    return 0;
}