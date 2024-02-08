#include <stdio.h>

int main(){

    double const rate = .10;

    double const rate2 = .05;

    int year = 1;

    double Daphne = 100.00 , Dierdre = 100.01;

    double increase;

    double increaseD;

    increase = rate * Daphne;


    do {

        printf("Year: %d\n", year);
        Daphne += increase;
        printf("Daphne investment: %f\n", Daphne);
        Dierdre += Dierdre * rate2;
        printf("Dierdre investment: %f\n", Dierdre);

        year++;


    } while (Daphne > Dierdre);

}