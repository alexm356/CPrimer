//8. modify so it prints a through g
#include <stdio.h>
#define TEN 103
int main(void)
{
    char a = 96;
    while (a++ < TEN)
        printf("%5c", a);
    printf("\n");
    return 0;
}