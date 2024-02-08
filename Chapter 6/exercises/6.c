#include <stdio.h>

int main(){

    char array[8] = "$$$$$$$$";

    for(int i = 0; i <= 3; i++)
    {
        for(int j = 0; j <= 8; j++)
            printf("%c", array[j]);
            printf("\n");
    }
}
