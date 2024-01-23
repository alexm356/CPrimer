/* post_pre.c -- postfix vs prefix */
#include <stdio.h>
int main(void)
{
    int a = 1, b = 1;
    int aplus, plusb;
    aplus = a++; /* postfix */ // a is changed after its value is used
    plusb = ++b; /* prefix */ // b is changed before its value is used
    printf("a  aplus    b   plusb \n");
    printf("%1d %5d %5d %5d\n", a, aplus, b, plusb);
    return 0;
}
