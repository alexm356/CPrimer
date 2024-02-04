#include <stdio.h>

int main(){

    int lower, upper;

    printf("Enter lower and upper limits of table: ");
    scanf("%d %d", &lower, &upper);

    for(int i = lower; i <= upper; i++){

        printf("%d %d %d\n", lower, lower * lower, lower * lower * lower);
        lower += 2;
    }
}