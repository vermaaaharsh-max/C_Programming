#include <stdio.h>
#include <string.h>
int main() {
    struct book {
        char name [60];
        int noOfPages;
        float price;
    } a,b,c;
    
    a.noOfPages = 100;
    a.price = 411.5;
    strcpy(a.name,"Secret Seven");
    
    printf("%d\n",a.noOfPages);
    printf("%f\n",a.price);
    printf("%s\n",a.name);

    b.noOfPages = 200;
    b.price = 100.4;
    strcpy(b.name,"Famous Five");

    printf("%d\n",b.noOfPages);
    printf("%f\n",b.price);
    printf("%s\n",b.name);

    return 0;
    
}