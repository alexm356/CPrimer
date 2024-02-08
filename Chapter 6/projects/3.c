#include <stdio.h>

#define SIZE 26

int main(){


    char lets[7] = "ABCDEFG";
    
    for(int i = 5; i >= 0; i--){
        printf("\n");
        for(int j = 5; j >= i; j--){

            printf(" %c", lets[j]);
        
        }
    }
}