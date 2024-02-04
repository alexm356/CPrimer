#include <stdio.h>

#define SIZE 26

int main(){


    char lets[7] = "ABCDEFG";
    
    for(int i = 1; i <= 6; i++){

        for(int j = 5; j >= i; j--){

            printf(" %c\n", lets[j]);
        
        }
    }
}