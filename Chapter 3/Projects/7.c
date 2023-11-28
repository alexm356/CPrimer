#include <stdio.h>

int main(){

    int height;

    double centimeter = 2.54;

    double conversion;

    printf("Enter your height: ");
    scanf("%d", &height);

    conversion = centimeter * height;

    print("Height in centimeters: %lf", conversion);

    return 0;


}