#include <stdio.h>

int main(){

    int array[8];

    int power = 1;

    int status;

    for(int i = 0; i < 8; i++){
        power *= 2;
        array[i] = power;
        
    }

    status = 0;

    do { 

        printf("%d\n", array[status]);
        status++;
    } while (status < 8);
}