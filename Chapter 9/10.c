#include <stdio.h>

#define MAX 60

void Fibonacci();

int main(){

    Fibonacci();

    return 0;

}

void Fibonacci(){

    int count;

    int sum = 0;

    int prev = 1;

    for (int i = 0; i < 25; i++){
        printf("%d\n", sum);
        sum = prev + sum;
        prev = sum;
        


    }
}