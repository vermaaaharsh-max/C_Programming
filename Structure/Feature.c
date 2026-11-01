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
    pokemon a,b,c;

    a.attack = 130;
    a.hp = 80;
    a.speed = 80;
    a.tier = 'S';
    strcpy(a.name,"Blastoise");
     b= a; //deep copy
    strcpy(b.name,"Venusaur");

    printf("%s\n",b.name);
    printf("%d",b.attack);
    return 0;
}