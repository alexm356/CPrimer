#include <stdio.h>

int main(){

    int arry[8];


    printf("Enter ints to fill array: ");
    for(int i = 0; i < 8; i++){
        scanf("%d", &arry[i]);
    }



    for(int i = 7; i >= 0; i--){
        printf(" %d", arry[i]);
    }
    printf("\n");
}