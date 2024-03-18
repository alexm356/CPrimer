#include <stdio.h>

void alter(int *x, int *y);

int main(){

    int a = 20, b = 10;

    alter(&a, &b);

    printf("%d %d", a, b);
}

void alter(int *x, int *y){

    int temp = *x;

    *x = *x + *y;
    *y = temp - *y;

}