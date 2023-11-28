#include <stdio.h>
#include <string.h>

#define GALLON 3.785
#define MILE 1.609

int main(){ 

    float milesTraveled;

    float gasoline;


    printf("Enter number of miles traveled: ");
    scanf("%f", &milesTraveled);

    printf("Enter gasoline consumed: ");
    scanf("%f", &gasoline);

    printf("MPG Value: %f\n", milesTraveled/gasoline);


}