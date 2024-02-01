#include <stdio.h>

int main(){

    int value;

    int count;

    printf("Enter an int: ");
    scanf("%d", &value);

    while (count < 11)
    {
        printf("%d\n", value++);
        count++;
    }

}