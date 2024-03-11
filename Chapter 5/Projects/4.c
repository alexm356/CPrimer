#include <stdio.h>

#define CM_INCH 2.54
#define INCH_FEET 12



int main(){

    float heigthsCm, heightInches, remainder;

    int feet;
    

    printf("Enter a height in centimeteres: ");
    scanf("%f", &heigthsCm);

    while(heigthsCm > 0){

        heightInches = heigthsCm / CM_INCH;
        feet = heightInches / INCH_FEET;
        remainder = heightInches - feet * INCH_FEET;

        printf("%.1f cm = %d feet, %.1f inches\n", heigthsCm, feet, remainder);

        printf("Enter next value (<=0 to quit):\n");
        scanf("%f", &heigthsCm);
    }
}