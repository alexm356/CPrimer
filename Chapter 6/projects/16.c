#include <stdio.h>

int main(){


    double amount = 1000000;

    double const rate = .08;

    double total;

    int overdraft = 0;

    int year = 1;

    do {

        printf("Year %d passed\n", year);
        total = amount * rate;
        amount += total;
        year++;
        amount -= 100000;
        printf("Balance remaining: %lf\n", amount);



    } while (amount > overdraft);
}