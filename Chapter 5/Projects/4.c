#include <stdio.h>

#define FEET 0.0328084

#define INCHES 0.393701

int main(){

    float centi;

    int feet;
    
    float inches;


    printf("Enter a height in centimeteres: ");
    scanf("%f", &centi);

    while(centi > 0){

        feet = centi * FEET;

        inches = centi * INCHES / 6;

        printf("%.1f cm = %d feet, %f inches\n", centi, feet, inches);
        printf("Enter next value (<=0 to quit):\n");
        scanf("%d", &centi);
    }
}