#include <stdio.h>

float calculateSubtotal(int quantity, float pricePerItem){
    return (quantity * pricePerItem);
}
float calculateDiscountedAmount(float subtotal, float discountPercent){
    return (subtotal - (subtotal * discountPercent) / 100);
}
float calculateFinalBill(float discountedAmount, float taxPercent){
    return (discountedAmount + (discountedAmount * taxPercent) / 100);
}

int main(){
    int quantity;
    float pricePerItem, discountPercent, taxPercent;
    float subtotal, discountedAmount, finalBill;

    printf("Online Shopping Bill Calculator\n");

    printf("Enter Quantity Purchased : ");
    scanf("%d", &quantity);

    printf("Enter Price Per Item : ");
    scanf("%f", &pricePerItem);

    printf("Enter Discount Percentage : ");
    scanf("%f", &discountPercent);

    printf("Enter Tax Percentage : ");
    scanf("%f", &taxPercent);

    
    if(quantity <= 0){
        printf("\nError: Quantity must be greater than 0. Calculation terminated.\n");
        
    }if(pricePerItem <= 0){
        printf("\nError: Price per item must be greater than 0. Calculation terminated.\n");
        
    }if(discountPercent < 0 || discountPercent > 100){
        printf("\nError: Discount percentage must be between 0 and 100. Calculation terminated.\n");
        
    }if(taxPercent < 0 || taxPercent > 100){
        printf("\nError: Tax percentage must be between 0 and 100. Calculation terminated.\n");
        
    }

    
    subtotal = calculateSubtotal(quantity, pricePerItem);
    discountedAmount = calculateDiscountedAmount(subtotal, discountPercent);
    finalBill = calculateFinalBill(discountedAmount, taxPercent);

    
    printf("Shopping Bill Receipt\n");
    printf("Quantity Purchased : %d\n", quantity);
    printf("Price Per Item : %.2f\n", pricePerItem);
    printf("Subtotal : %.2f\n", subtotal);
    printf("Discount Applied : %.2f%%\n", discountPercent);
    printf("Amount After Discount : %.2f\n", discountedAmount);
    printf("Tax Applied : %.2f%%\n", taxPercent);
    printf("Final Bill : %.2f\n", finalBill);

    return 0;
}