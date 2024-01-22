/* width.c -- field widths */
#include <stdio.h>
#define PAGES 931

// prints same quantity 4 times using four different conversion specs.
int main(void)
{
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-10d*\n", PAGES);
    return 0;
}

/*

* first is %d with no modifiers.
* %2d - produces field width of 2, but because int is 3 digits long, automatically expanded to fit number.
* %10d - produces field width 10 spaces long, seven b;anks and 3 digits between asterisks, number tucked into right end of field.
* %-10d - produces field 10 spaced wide, - puts number at left end, as advertised. 

*/