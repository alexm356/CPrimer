#include <stdio.h>


float cube(float values);

int main(){
    
    float value;

    float result;

    printf("Enter a float: ");
    scanf("%f", &value);

    result = cube(value);

    printf("Value of number cubed %f", result);
}

float cube(float values){

    float final;

    final = values * values * values;

    return final;

}