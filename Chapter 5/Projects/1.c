#include <stdio.h>

#define MINUTES 60

int main(){

    int hour;

    int minutes;

    int minutesFinal;

    int entry = 1;

    printf("Enter a time in minutes: ");
    scanf("%d", &minutes);

    while (minutes > 0)
    {
        hour = minutes / MINUTES;
        minutesFinal = minutes % MINUTES;
        printf("Time in hours and minutes: %d:%d\n", hour, minutesFinal);
        printf("Enter next value: \n");
        scanf("%d", &minutes);
    }
    printf("done!");
}