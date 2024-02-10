#include <stdio.h>

int main(){

    double a[8];

    double b[8];

    double sum = 0;

    for(int i = 0; i < 8; i++){ // read in values to first array
        scanf("%lf", &a[i]);
    }



    for(int i = 0; i < 8; i++){

        

        for(int j = 0; j <= i; j++){

            sum += a[j];
           
        }

        b[i]= sum;
        sum = 0;
         
    }

    for(int i = 0; i <= 8; i++){
        printf(" %.1lf", a[i]);
    }

    printf("\n");

    for(int i = 0; i < 8; i++){
        printf(" %.1lf", b[i]);
    }
}