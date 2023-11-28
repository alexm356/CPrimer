#include <stdio.h>
#define PRAISE "what a marvelous name!"

int main(){

    char name[40];

    printf("What's your name?\n");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);
    return 0; 
}

/*
* Note that scanf() just reads first name. 
After scanf() starts to read input, it stops reading at the first whitespace(blank, tab or newline).
*Therefore, it stops scanning for name when it reaches blank between Hilary and Bubbles.
* In general, scanf() is used with %s to read only single word, not whole phrase.


*/