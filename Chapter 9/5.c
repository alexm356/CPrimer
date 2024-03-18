#include <stdio.h>

void larger_of(double x, double y);

int main(){

    double value1 = 2, value2 = 11;

    larger_of(value1, value2);



}

void larger_of(double x, double y){

    double large, small;

    if (x > y){
        large = x;
        small = x;
    }else {
        large = y;
        small = y;
    }

    printf("X: %lf, Y: %lf", large, small);

}