#include <stdio.h>

int main(){

    int days, weeks, daysFinal;

    printf("Enter a number of days: ");
    scanf("%d", &days);

    weeks = days / 7;

    daysFinal = days % 7;

    printf("%d days are %d weeks, %d days.", days, weeks, daysFinal);

}