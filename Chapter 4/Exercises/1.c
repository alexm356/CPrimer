#include <stdio.h>
#include <string.h>

int main(){

    char first[10];
    char last[10];

    printf("Please enter first name: ");
    scanf("%s", first);

    printf("Please enter last name: ");
    scanf("%s", last);

    printf("%s, %s\n", last, first);

    return 0;
}