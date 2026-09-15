#include <stdio.h>
#include <string.h>

int main(){
    char vehicleType, membership, disabledPriority, stationAvailable;
    float batteryLevel, requiredChargingLevel, parkingDuration;
    int currentTime;

    char peakStatus[15];
    char priority[30];
    char chargingMessage[60];
    char warningMessage[80];

    char canCharge;
    float rate;
    float requiredUnits, chargingCostBase, chargingDiscountAmount, chargingDiscountPercent, chargingCost;
    float parkingBase, parkingDiscountAmount, parkingCost;
    float finalPayable;

    printf("Smart EV Charging and Parking Management System\n\n");

    printf("Enter Vehicle Type (E for Electric, H for Hybrid): ");
    scanf(" %c", &vehicleType);

    printf("Enter Current Battery Level (SOC) as Percentage: ");
    scanf("%f", &batteryLevel);

    printf("Enter Required Charging Level as Percentage: ");
    scanf("%f", &requiredChargingLevel);

    printf("Enter Expected Parking Duration in Hours: ");
    scanf("%f", &parkingDuration);

    printf("Enter Current Time in 24 Hour Format (0-23): ");
    scanf("%d", &currentTime);

    printf("Does the Customer Have a Parking Membership? (Y/N): ");
    scanf(" %c", &membership);

    printf("Does the Customer Have Disabled Person Priority Status? (Y/N): ");
    scanf(" %c", &disabledPriority);

    printf("Is the Charging Station Currently Available? (Y/N): ");
    scanf(" %c", &stationAvailable);

    
    if(currentTime >= 17 && currentTime < 22){
        strcpy(peakStatus, "Peak");
        rate = 50;
    }else{
        strcpy(peakStatus, "Off-Peak");
        rate = 35;
    }

   
    if(batteryLevel <= 15 && requiredChargingLevel >= 80){
        strcpy(priority, "Emergency Charging Priority");
    }else{
        if(disabledPriority == 'Y' || (membership == 'Y' && batteryLevel <= 30)){
            strcpy(priority, "Priority Charging");
        }else{
            strcpy(priority, "Normal Charging");
        }
    }

    
    canCharge = 'N';

    if(stationAvailable == 'N'){
        if(vehicleType == 'H'){
            strcpy(chargingMessage, "Charging unavailable - Parking only.");
        }else{
            strcpy(chargingMessage, "No charging slot available.");
        }
    }else{
        if(vehicleType == 'H' && batteryLevel >= 40){
            strcpy(chargingMessage, "Vehicle does not qualify for EV charging.");
        }else{
            if(requiredChargingLevel <= batteryLevel){
                strcpy(chargingMessage, "No charging required.");
            }else{
                canCharge = 'Y';
                strcpy(chargingMessage, "Charging in progress.");
            }
        }
    }

    
    requiredUnits = 0;
    chargingCostBase = 0;
    chargingDiscountPercent = 0;
    chargingDiscountAmount = 0;
    chargingCost = 0;

    if(canCharge == 'Y'){
        requiredUnits = requiredChargingLevel - batteryLevel;
        chargingCostBase = requiredUnits * rate;

        if(strcmp(priority, "Emergency Charging Priority") == 0){
            chargingDiscountPercent = 0;
        }else if(strcmp(peakStatus, "Off-Peak") == 0 && membership == 'Y'){
            chargingDiscountPercent = 20;
        }else if(strcmp(peakStatus, "Peak") == 0 && strcmp(priority, "Priority Charging") == 0){
            chargingDiscountPercent = 10;
        }else{
            chargingDiscountPercent = 0;
        }

        chargingDiscountAmount = (chargingCostBase * chargingDiscountPercent) / 100;
        chargingCost = chargingCostBase - chargingDiscountAmount;
    }

    
    parkingBase = 0;
    parkingDiscountAmount = 0;
    parkingCost = 0;

    if(disabledPriority == 'Y'){
        parkingCost = 0;
    }else{
        if(parkingDuration <= 2){
            parkingBase = 200;
        }if(parkingDuration > 2 && parkingDuration <= 5){
            parkingBase = 400;
        }if(parkingDuration > 5){
            parkingBase = 700;
        }

        if(membership == 'Y'){
            parkingDiscountAmount = (parkingBase * 20) / 100;
        }

        parkingCost = parkingBase - parkingDiscountAmount;
    }

    
    if(parkingDuration > 8){
        strcpy(warningMessage, "Long-stay warning: Please relocate your vehicle after 8 hours.");
    }else{
        strcpy(warningMessage, "Standard parking duration.");
    }

    finalPayable = chargingCost + parkingCost;

    
    printf("\nVehicle Type : %c\n", vehicleType);
    printf("Current Battery Level : %.2f%%\n", batteryLevel);
    printf("Required Charging Level : %.2f%%\n", requiredChargingLevel);
    printf("Charging Status : %s\n", chargingMessage);
    printf("Charging Priority : %s\n", priority);
    printf("Time Status : %s\n", peakStatus);
    printf("Charging Cost : Rs. %.2f\n", chargingCostBase);
    printf("Charging Discount : Rs. %.2f\n", chargingDiscountAmount);
    printf("Final Charging Amount : Rs. %.2f\n", chargingCost);
    printf("Parking Cost : Rs. %.2f\n", parkingBase);
    printf("Parking Discount : Rs. %.2f\n", parkingDiscountAmount);
    printf("Final Parking Amount : Rs. %.2f\n", parkingCost);
    printf("Final Payable Amount : Rs. %.2f\n", finalPayable);
    printf("Parking Duration Notice : %s\n", warningMessage);

    return 0;
}