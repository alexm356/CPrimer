//pointer addition program

#include <stdio.h>
#define SIZE 4

int main(){
    
    short dates [SIZE];
    short *pti;
    short index;
    double bills[SIZE];
    double *ptf;

    pti = dates; // assign address of array to pointer
    ptf = bills;
    printf("%23s %10s\n", "short", "double");
    for (index = 0; index < SIZE; index++)
        printf("pointer + %d: %10p %10p\n", index, pti + index, ptf + index);

        return 0;
    }