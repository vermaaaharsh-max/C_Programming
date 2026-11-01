#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main() {
      typedef struct date {
          int day ;
          int month ;
          int year ;
          } date ;
     date a,b;

    a.day = 19;
    a.month = 05;
    a.year = 2007;

    b.day = 19;
    b.month = 11;
    b.year = 2023;

    bool flag = true;
    if (a.day != b.day) flag = false;
    if (a.month != b.month) flag = false;
    if (a.year != b.year) flag = false;

    if (flag == true) printf("Dates are same.");
    else printf("Dates are not same");
     return 0; }