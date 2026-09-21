#include <stdio.h>
int main(){
    float CostPrice, SellingPrice;
    printf("Enter cost price: ");
    scanf("%f", &CostPrice);
    printf("Enter selling price: ");
    scanf("%f", &SellingPrice);
    if(SellingPrice > CostPrice){
        printf("Profit of: %f\n", SellingPrice - CostPrice);
    }
    else if(SellingPrice < CostPrice){
        printf("Loss of: %f\n", CostPrice - SellingPrice);
    }
    else{
        printf("No profit, no loss.\n");
    }
    return 0;
}