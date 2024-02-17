/*
Using if else statements, write a program that reads input up to #, replaces
each period with an exclamation mark, replaces each exclamation mark initially
present with two exclamation marks, and reports at the end the number of
substitutions it has made.
*/

#include <stdio.h>

#define STOP '#'



int main(){ 

    char c;

    int substitutionCount;

    printf("Enter text (# to terminate): \n");
    while((c = getchar()) != STOP){

        if (c == '.'){
            putchar(c - 13);
            substitutionCount++;
        }
        else if (c == '!'){
            putchar(c);
            putchar(c);
            substitutionCount++; 
        }else 
            putchar(c);
        }
    printf("\n");
    printf("Substitutions made: %d", substitutionCount);

}