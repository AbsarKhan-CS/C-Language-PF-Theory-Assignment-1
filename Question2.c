#include <stdio.h>
int main(){ 
    int currentFloor = 0, Floor;
    printf("What is the Current Floor of the Elevator : ");
    scanf("%d", &currentFloor);

    printf("Which Floor are you on : ");
    scanf("%d", &Floor);

    if(currentFloor < Floor){
        printf("Lift Is Moving Up");

    }if(currentFloor == Floor){
        printf("Door IS Opening");

    }if(currentFloor > Floor){
        printf("Lift Is Moving Down");

    }
    

    
    return 0;
}