#include <stdio.h>

int main(){

    double age;

   double ageSeconds = 3.156e7;

    double finalAge;

    printf("What is your age: ");
    scanf("%lf", &age);

    finalAge = age * ageSeconds;

    printf("Age in Seconds: %lf\n", finalAge);

    return 0;
}