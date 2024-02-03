#include <stdio.h>



int main(){

    int sum;

    char array[6] = "$$$$$$";

    for(int i = 0; i < 5; i++){
        printf("%c\n", array[i]);
        for(int ch = 0; ch < 5; ch++){
            printf("%c", array[0]);
        }
    }
}