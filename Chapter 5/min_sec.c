// min_sec.c -- converts seconds to minutes and seconds
#include <stdio.h>
#define SEC_PER_MIN 60 // seconds in a minute

/*

* modulus operator is used in int arithmetic.It gives remainder that results when int on left divided by int to its right.
* For example, 13 % 5 has value 3 because 5 goes into 13 twice, with remainder 3.

*/

int main(void)
{
    int sec, min, left;
    printf("Convert seconds to minutes and seconds!\n");
    printf("Enter the number of seconds (<=0 to quit):\n");
    scanf("%d", &sec); // read number of seconds
    while (sec > 0)
    {
        min = sec / SEC_PER_MIN; // truncated number of minutes
        left = sec % SEC_PER_MIN; // number of seconds left over
        printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
        printf("Enter next value (<=0 to quit):\n");
        scanf("%d", &sec);
    }
    printf("Done!\n");
    return 0;
}
