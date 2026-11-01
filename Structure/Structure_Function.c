#include <stdio.h>
#include <string.h>
 typedef struct pokemon{
        char name[150];
        int hp;
        int attack;
        int speed;
        char tier;
        } pokemon;
void fun(pokemon p) {
    printf("%d",p.hp);
    return;
}
int main() { 
    pokemon pikachu;
    pikachu.hp = 60;
    fun(pikachu);
     return 0; }
    