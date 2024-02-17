#include <stdio.h>

#define STOP '#'

int main(){

    char ch;

    int charcount;


    
    printf("Enter text (# to terminate): \n");
    while((ch = getchar()) != STOP)
    {
        if (ch == 'e' && ch == 'i')
            charcount++;
    }
    printf("There are %d non-quote characters.\n", charcount);
    return 0;
}