#include <stdio.h>
int main(){
    int guests, daysStayed, eachguestcost, cost, discount, hotelRevenue;
    char season, roomtype;

    printf("Enter How many Guests are there : ");
    scanf("%d", &guests);

    printf("What is the Current Season \nIs it Peak(P) Or OffSeason(O): ");
    scanf(" %c", &season);

    printf("Which Room Type You Want\n");
    printf("N For Normal\n");
    printf("D For Deluxe\n");
    printf("S For Suite\n");
    scanf(" %c", &roomtype);

    //printf("How Many Days You want to Stay : ");
    //scanf("%d", &daysStayed);

    if(season == 'P' && roomtype == 'N'){
        printf("How Many Days You Stayed : ");
        scanf("%d", &daysStayed);
        
        if(daysStayed > 7 ){
            cost = (5000*daysStayed);
            discount = (cost*15)/100;
            eachguestcost = (cost - discount);
            hotelRevenue = (5000*daysStayed*guests) - discount;
            printf("Each Guest will pay : %d\n", eachguestcost);
            printf("Hotel Revenue is %d\n", hotelRevenue);
            
        }else{
            eachguestcost = (5000*daysStayed);
            hotelRevenue = (5000*daysStayed*guests);
            printf("Each Guest will pay : %d\n", eachguestcost);
            printf("Hotel Revenue is %d\n", hotelRevenue);
        }
    }if(season == 'P' && roomtype == 'D'){
        printf("How Many Days You Stayed : ");
        scanf("%d", &daysStayed);
        
        if(daysStayed > 7 ){
            cost = (8000*daysStayed);
            discount = (cost*15)/100;
            eachguestcost = (cost - discount);
            hotelRevenue = (8000*daysStayed*guests) - discount;
            printf("Each Guest will pay : %d\n", eachguestcost);
            printf("Hotel Revenue is %d\n", hotelRevenue);
            
        }else{
            eachguestcost = (8000*daysStayed);
            hotelRevenue = (8000*daysStayed*guests);
            printf("Each Guest will pay : %d\n", eachguestcost);
            printf("Hotel Revenue is %d\n", hotelRevenue);
        }
    }if(season == 'P' && roomtype == 'S'){
        printf("How Many Days You Stayed : ");
        scanf("%d", &daysStayed);
        
        if(daysStayed > 7 ){
            cost = (12000*daysStayed);
            discount = (cost*15)/100;
            eachguestcost = (cost - discount);
            hotelRevenue = (12000*daysStayed*guests) - discount;
            printf("Each Guest will pay : %d\n", eachguestcost);
            printf("Hotel Revenue is %d\n", hotelRevenue);
            
        }else{
            eachguestcost = (12000*daysStayed);
            hotelRevenue = (12000*daysStayed*guests);
            printf("Each Guest will pay : %d\n", eachguestcost);
            printf("Hotel Revenue is %d\n", hotelRevenue);
        }    
    }if(season == 'O' && roomtype == 'N'){
        printf("How Many Days You Stayed : ");
        scanf("%d", &daysStayed);
        
        if(daysStayed > 7 ){
            cost = (3000*daysStayed);
            discount = (cost*15)/100;
            eachguestcost = (cost - discount);
            hotelRevenue = (3000*daysStayed*guests) - discount;
            printf("Each Guest will pay : %d\n", eachguestcost);
            printf("Hotel Revenue is %d\n", hotelRevenue);
            
        }else{
            eachguestcost = (3000*daysStayed);
            hotelRevenue = (3000*daysStayed*guests);
            printf("Each Guest will pay : %d\n", eachguestcost);
            printf("Hotel Revenue is %d\n", hotelRevenue);
        }
    }if(season == 'O' && roomtype == 'D'){
        printf("How Many Days You Stayed : ");
        scanf("%d", &daysStayed);
        
        if(daysStayed > 7 ){
            cost = (5000*daysStayed);
            discount = (cost*15)/100;
            eachguestcost = (cost - discount);
            hotelRevenue = (5000*daysStayed*guests) - discount;
            printf("Each Guest will pay : %d\n", eachguestcost);
            printf("Hotel Revenue is %d\n", hotelRevenue);
            
        }else{
            eachguestcost = (5000*daysStayed);
            hotelRevenue = (5000*daysStayed*guests);
            printf("Each Guest will pay : %d\n", eachguestcost);
            printf("Hotel Revenue is %d\n", hotelRevenue);
        }
    }if(season == 'O' && roomtype == 'S'){
        printf("How Many Days You Stayed : ");
        scanf("%d", &daysStayed);
        
        if(daysStayed > 7 ){
            cost = (8000*daysStayed);
            discount = (cost*15)/100;
            eachguestcost = (cost - discount);
            hotelRevenue = (8000*daysStayed*guests) - discount;
            printf("Each Guest will pay : %d\n", eachguestcost);
            printf("Hotel Revenue is %d\n", hotelRevenue);
            
        }else{
            eachguestcost = (8000*daysStayed);
            hotelRevenue = (8000*daysStayed*guests);
            printf("Each Guest will pay : %d\n", eachguestcost);
            printf("Hotel Revenue is %d\n", hotelRevenue);
        }    
    }    
        return 0;
}