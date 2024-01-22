/* flags.c -- illustrates some formatting flags */
#include <stdio.h>
int main(void)
{
    printf("%x %X %#x\n", 31, 31, 31); // 1f is hex equivalent of 31. x specifier yields 1f, and x specifier yields 1F. using # flag provides 0x

    printf("**%d**% d**% d**\n", 42, 42, -42); // using space in specifier produces leading space for positives, but not for negatives.

    printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6); //using precision specifier (%5.3d) with an int produces enough leading 0s to pad number to minimum value of digits (3)
    //using the 0 flag pads the number with enough leading zeroes to fill whole field width. if you provide both the 0 flag and precision specifier, 0 flag is ignored.

    return 0;

}