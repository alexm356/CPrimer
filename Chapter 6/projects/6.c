#include <stdio.h>
#include <string.h>

#define MAX 9

int main(){


    char array[MAX];

    printf("Enter a word to reverse: ");
    for(int i = 0; i < MAX; i++){
        scanf("%c", &array[i]);
    }

    printf("Word Backwords: ");
    for(int i = strlen(array); i >= 0; i--){
        printf("%c", array[i]);
    }
}