#include <stdio.h>

double min(double x, double y);

int main(){

    double value1, value2;

    printf("Enter two double values separated by comma: ");
    scanf("%lf, %lf ", &value1, &value2);

    printf("%lf is smaller\n", min(value1, value2));




}

double min(double x, double y){ 

    double smallest, largest;

    if( x > y){
        largest = x;
        smallest = y;
    }else{
        largest = y;
        smallest = x;
    }

    return smallest;

}