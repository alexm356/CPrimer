#include <stdio.h>

#define STOP '#'

int main(){

    char ch;

    int charcount;

    char prev;

    char current;


    
    printf("Enter text (# to terminate): \n");
    while((ch = getchar()) != STOP)
    {
        
        if (prev == 'e' && ch == 'i'){
            charcount++;
        }
        prev = ch;    
    }
    printf("Sequence occurs %d times.\n", charcount);
    return 0;
}