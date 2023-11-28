#include <stdio.h>

int main(){

    int age;

    float ageSeconds = 3.156e7;

    double finalAge;

    printf("What is your age: ");
    scanf("%d", &age);

    finalAge = age * ageSeconds;

    printf("Age in Seconds: %lf\n", finalAge);

    return 0;
}