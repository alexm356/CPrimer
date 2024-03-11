#include <stdio.h>
#include <string.h>

int main(){

    char name[10];

    printf("Enter name: ");
    scanf("%s", name);

    printf("%s\n", name);

    printf("%.20s", name);

    printf("%.20s", name);

    printf("%.3s", name);

    return 0;

}