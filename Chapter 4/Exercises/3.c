#include <stdio.h>

int main(){


    float entry;

    printf("Enter floating point number: ");
    scanf("%f", &entry);

    printf("The input is %.1f or %.1e\n", entry, entry);

    printf("The input is %.1f or %.3e", entry, entry);

    return 0;
}