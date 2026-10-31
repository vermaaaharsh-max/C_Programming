#include <stdio.h>
int main () {
    struct pokemon {
        int hp;
        int speed;
        int attack;
        char tier;
    } ;
    struct pokemon pikachu;
    pikachu.hp = 50;
    printf("Enter attack of Pikachu:");
    scanf("%d",&pikachu.attack);
    pikachu.speed= 100;
    pikachu.tier = 'A';

    struct pokemon charizard;
    charizard.attack = 130;
    charizard.hp = 80;
    charizard.speed = 80;
    charizard.tier = 'S';

    struct pokemon mewtwo;
    mewtwo.attack = 170;
    mewtwo.hp = 150;
    mewtwo.speed = 200;
    mewtwo.tier = 'G';
    printf("%d",pikachu.attack);
    return 0;
}