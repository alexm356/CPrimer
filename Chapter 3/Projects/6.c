#include <stdio.h>

int main(){

    int quart = 950;

    int waterAmount;

    double coefficient = 3.0e-23;

    double finalAmount;

    double final; 

    printf("Enter amount of water: ");
    scanf("%d", &waterAmount);

    finalAmount = quart * waterAmount;

    final = finalAmount * coefficient;

    printf("Final Amount: %lf\n", final);

    return 0;
}