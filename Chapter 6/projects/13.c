#include <stdio.h>

int main(){

    double a[8];

    double b[8];

    double sum;

    for(int i = 0; i < 8;i++){
        scanf("%lf", &b[i]);
    }



    for(int i = 0; i < 8; i++){

        for(int j = 0; j < 8; j++){

            sum += a[j] + a[i];
        }
        b[i]= sum;
    }

    for(int i = 0; i < 8; i++){
        printf("%.2lf", a[i]);
    }

    printf("\n");

    for(int i = 0; i < 8; i++){
        printf("%.2lf", b[i]);
    }
}