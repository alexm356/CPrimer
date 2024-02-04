#include <stdio.h>

int main(){

    int array[5];

    for(int i = 1; i <= 5; i++)
    {
        array[i] = 36;
        for(int j = 1; j <= i; j++)
            printf(" %c", array[j]);
            printf("\n");
    }
}
