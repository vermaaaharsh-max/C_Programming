#include <stdio.h>
#include <string.h>
 int main() {
     typedef struct cricketer {
        char firstname[150];
        char lastname[150];
         int age;
         int noOfMatches;
         float average;
     } cricketer;
     cricketer arr[2];
     for (int i=0;i<2;i++) {
         printf("\nEnter First Name of Cricketer %d : ",i+1);
         scanf("%s",arr[i].firstname);
         printf("Enter Last Name of Cricketer %d : ",i+1);
         scanf("%s",arr[i].lastname);
         printf("Enter Age of Cricketer %d : ",i+1);
         scanf("%d",&arr[i].age);
         printf("Enter Number of Matches Played by Cricketer %d : ",i+1);
         scanf("%d",&arr[i].noOfMatches);
         printf("Enter Average of Cricketer %d : ",i+1);
         scanf("%f",&arr[i].average);
     }
     for (int i=0;i<2;i++) {
     printf("Name : %s %s\n",arr[i].firstname,arr[i].lastname);
    printf("Age : %d\n",arr[i].age); 
    printf("Number of Matches Played : %d\n",arr[i].noOfMatches); 
    printf("Average : %d\n\n",arr[i].average); 
     } 
     return 0;
 }