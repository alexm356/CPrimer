#include <stdio.h>

double harmonic_mean(double value1, double value2);

int main(){

    double x = 23.0, y = 29.0;

    double result;

    result = harmonic_mean(x, y);

    printf("Harmonic mean: %.02lf\n", result);


}

double harmonic_mean(double value1, double value2){

    double temp1, temp2;

    temp1 = value1 * -1;
    temp2 = value2 * -1;

    return ((temp1 + temp2) / 2) * -1;



}