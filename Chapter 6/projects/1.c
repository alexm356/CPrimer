#include <stdio.h>

#define SIZE 25



int main(){

    char array[SIZE];

    int ch = 'a';

    for(int i = 0; i <= SIZE; i++){
        array[i] = ch++; 
    }

    printf("Contents: ");
    for(int i = 0; i <= SIZE; i++){
        printf("%c", array[i]);
    }

}