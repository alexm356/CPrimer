#include <stdio.h>

int main(void){

    int n, n2, n3;

    n = 5;
    n2 = n * n;
    n3 = n2 * n2; // n3 supposed to represent cube of n but code sets it up to be 4th power

    printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);

    return 0;
}