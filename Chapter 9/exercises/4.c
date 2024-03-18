#include <stdio.h>

int sum(int a, int b);

int main(){

    int sums;

    int c = 10, d = 20;

    sums = sum(c,d);

    printf("%d", sums);


}

int sum(int a, int b){

return a + b;

}