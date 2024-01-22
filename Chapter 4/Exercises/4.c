#include <stdio.h> 

int main(){

    float height;

    char name[20];

    printf("What is your height in inches?");
    scanf("%f", &height);

    printf("What is your name?");
    scanf("%s", name);

    printf("%s , you are %f feet tall", name, height / 12);




}