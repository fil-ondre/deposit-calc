#include <stdio.h>
#include "deposit.h"

int main(void) {
    int duration;
    float investment;
    
    printf("Enter investment duration: ");
    scanf("%d", &duration);
    printf("Enter investent amount: ");
    scanf("%f", &investment);
    getInput(&duration, &investment);
    perform(&duration, &investment);

    printf("Duration: %d \nInvestment: %f", duration, investment);
    printf("\n");
    
    return 0;
}
