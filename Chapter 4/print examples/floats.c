// floats.c -- some floating-point combinations
#include <stdio.h>
int main(void)
{
    const double RENT = 3852.99; // const-style constant

    printf("*%f*\n", RENT);
    printf("*%e*\n", RENT);
    printf("*%4.2f*\n", RENT);
    printf("*%3.1f*\n", RENT);
    printf("*%10.3f*\n", RENT);
    printf("*%10.3e*\n", RENT);
    printf("*%+4.2f*\n", RENT);
    printf("*%010.2f*\n", RENT);
    return 0;
}

/*

*example begins with default version, %f. there are two defaults - field width and number of digits right of decimal.
*second is 6 digits, and field width is whatever it takes to hold the number.

*next is the default for %e. it prints one to the left of the decimal point and six places to the right.

*the + flag causes the result to be printed with its algebraic sign, which is a plus sign in this case, and the 0 flag produces leading zeroes to pad the result to the full field width.



*/